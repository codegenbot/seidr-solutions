#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    int temp = 0;
    bool inParenthesis = false;

    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "(") {
            inParenthesis = true;
        } else if (operator_[i] == ")") {
            inParenthesis = false;
        } else if (!inParenthesis) {
            if (operator_[i] == "+") {
                result += operand[i];
            } else if (operator_[i] == "-") {
                result -= operand[i];
            } else if (operator_[i] == "*") {
                temp *= operand[i];
            } else if (operator_[i] == "/") {
                temp /= operand[i];
            } else if (operator_[i] == "**") {
                temp = pow(temp, operand[i]);
            }
        } else {
            if (operator_[i] == "+") {
                temp += operand[i];
            } else if (operator_[i] == "-") {
                temp -= operand[i];
            } else if (operator_[i] == "*") {
                temp *= operand[i];
            } else if (operator_[i] == "/") {
                temp /= operand[i];
            } else if (operator_[i] == "**") {
                temp = pow(temp, operand[i]);
            }
        }
    }

    return result;
}