#include <sstream>
#include <vector>
#include <utility>
#include <cmath>

using namespace std;

int do_algebra(vector<pair<char, int>> operators_and_operands) {
    if (operators_and_operands.size() == 0) {
        return 0;
    }
    
    int result = operators_and_operands[0].second;
    for (const auto& pair : operators_and_operands) {
        if (pair.first == '+') {
            result += pair.second;
        } else if (pair.first == '-') {
            result -= pair.second;
        } else if (pair.first == '*') {
            result *= pair.second;
        } else if (pair.first == '/') {
            if (pair.second != 0) {
                result /= pair.second;
            }
        } else if (pair.first == '^') { 
            result = pow(result, pair.second);
        }
    }
    return result;
}

int main() {
    string str = "++7*3+4";
    istringstream iss(str);
    
    vector<pair<char, int>> operators_and_operands;
    string token;
    int operand = 0; // initialize operand variable
    char op = '+';
    while (getline(iss, token)) {
        if (!token.empty()) {
            // if operator is not '+' then add previous operand and operator to vector
            if (op != '+') {
                operators_and_operands.push_back({op, operand});
                op = '+';
                operand = 0;
            }
            // process the current token as operand or operator
            if (token[0] == '+') {
                op = '+';
                operand = stoi(token.substr(1));
            } else if (token[0] == '-') {
                op = '-';
                operand = stoi(token.substr(1));
            } else if (token[0] == '*') {
                op = '*';
                operand = stoi(token.substr(1));
            } else if (token[0] == '/') {
                op = '/';
                operand = stoi(token.substr(1));
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
    
    int result = do_algebra(operators_and_operands);
    return 0;
}