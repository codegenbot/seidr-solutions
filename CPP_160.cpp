#include <vector>
#include <string>
#include <cstdio>
#include <cctype>

int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        if (i == 0)
            expression += to_string(operand[i]);
        else {
            expression += " ";
            expression += operator_[i];
            expression += " ";
            expression += to_string(operand[i]);
        }
    }

    int result = 0;
    int currentOperand = operand[0];
    char operation = operator_[0][0];

    for (int i = 1; i < operator_.size(); i++) {
        if (operation == '+') {
            result += currentOperand;
        } else if (operation == '-') {
            result -= currentOperand;
        }
        currentOperand = operand[i];
        operation = operator_[i][0];
    }

    if (operation == '+') {
        result += currentOperand;
    } else if (operation == '-') {
        result -= currentOperand;
    }

    return result;
}