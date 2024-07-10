#include <vector>
#include <string>
#include <cstdio>

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
    for (int i = 1; i < operand.size(); i++) {
        if (operator_[i-1] == "+") {
            result += operand[i];
        } else if (operator_[i-1] == "*") {
            result *= operand[i];
        }
    }

    return result;
}