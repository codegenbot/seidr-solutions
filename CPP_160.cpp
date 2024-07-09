#include <vector>
#include <cmath>
#include <utility>
#include <stack>
#include <string>

int do_algebra(std::string expression) {
    std::stack<int> operands;
    int result = 0;

    for (char c : expression) {
        if (std::isdigit(c)) {
            int val = c - '0';
            while (expression[expression.size() - 1] == '0' || expression[expression.size() - 1] == '1') {
                val = val * 10 + (expression.back() - '0');
                expression.pop_back();
            }
            operands.push(val);
        } else if (c == '(') {
            expression.push_back(')');
        } else if (c == ')') {
            while (expression.back() != '(') {
                char op = expression.back();
                int operand;
                expression.pop_back();
                if (std::isdigit(expression.back())) {
                    operand = 0;
                    while (std::isdigit(expression.back())) {
                        operand = operand * 10 + (expression.back() - '0');
                        expression.pop_back();
                    }
                    expression.push_back(')');
                } else {
                    operand = operands.top(); operands.pop();
                }
                if (op == '+') result += operand;
                else if (op == '-') result -= operand;
                else if (op == '*') result *= operand;
                else if (op == '/') result /= operand;
            }
            expression.pop_back();
        } else {
            while (!expression.empty() && expression.back() != ')') {
                char op = expression.back();
                int operand;
                expression.pop_back();
                if (std::isdigit(expression.back())) {
                    operand = 0;
                    while (std::isdigit(expression.back())) {
                        operand = operand * 10 + (expression.back() - '0');
                        expression.pop_back();
                    }
                    expression.push_back(')');
                } else {
                    operand = operands.top(); operands.pop();
                }
                if (op == '+') result += operand;
                else if (op == '-') result -= operand;
                else if (op == '*') result *= operand;
                else if (op == '/') result /= operand;
            }
            expression.pop_back();
        }
    }
    return result;
}