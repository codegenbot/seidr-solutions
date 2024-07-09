#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

struct Expression {
    char op;
    int operand;
};

int main() {
    vector<Expression> operators_and_operands;

    string token;
    char op = '+';
    int operand = 0;
    stringstream iss;
    iss << "+1-2*3+4/5^6";

    while (iss >> token) {
        if (!token.empty()) {
            if (op != '+') {
                operators_and_operands.push_back({op, operand});
                op = '+';
                operand = 0;
            }
            if (token[0] == '+') {
                op = '+';
                operand = stoi(token.substr(1));
            } else if (token[0] == '-') {
                op = '-';
                operand = stoll(token.substr(1));
            } else if (token[0] == '*') {
                op = '*';
                operand = stoll(token.substr(1));
            } else if (token[0] == '/') {
                op = '/';
                operand = stoll(token.substr(1));
            } else if (token[0] == '^') {
                op = '^';
                operand = stoi(token.substr(1));
            }
        }
    }

    // add the last operator and operand to vector
    if (op != '+') {
        operators_and_operands.push_back({op, operand});
    }

    for (const auto &expr : operators_and_operands) {
        cout << "Operator: " << expr.op;
        cout << ", Operand: " << expr.operand << endl;
    }
}