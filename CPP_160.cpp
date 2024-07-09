```cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct Expression {
    char op;
    int operand;
};

int main() {
    if (fopen_s(&fin, "input.txt", "r") != 0) {
        cerr << "Failed to open input file.\n";
        return 1;
    }

    vector<Expression> operators_and_operands;

    string token;
    char op = '+';
    int operand = 0;

    while (fin >> token) {
        if (!token.empty()) {
            if (!op == '+') {
                operators_and_opernds.push_back({op, operand});
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
    if (!op == '+') {
        operators_and_operands.push_back({op, operand});
    }

    for (const auto& expression : operators_and_operands) {
        cout << "Operator: " << expression.op;
        cout << ", Operand: " << expression.operand << endl;
    }
}