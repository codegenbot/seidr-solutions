```cpp
#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i];
        } else if (operator_[i] == "-") {
            result -= operand[i];
        } else if (operator_[i] == "*") {
            int temp = 0;
            for (int j = i; j < operand.size(); j++) {
                temp += operand[j];
                if (j < operand.size() - 1) {
                    if (operator_[j + 1] == "*") {
                        temp *= operand[j + 1];
                    } else if (operator_[j + 1] == "//") {
                        temp = temp / operand[j + 1];
                    } else if (operator_[j + 1] == "**") {
                        temp = pow(temp, operand[j + 1]);
                    }
                }
            }
            result = temp;
        } else if (operator_[i] == "//") {
            int temp = operand[i - 1];
            for (int j = i; j < operand.size(); j++) {
                temp /= operand[j];
            }
            result = temp;
        } else if (operator_[i] == "**") {
            int temp = pow(operand[i - 1], 1);
            for (int j = i; j < operand.size(); j++) {
                temp = pow(temp, operand[j]);
            }
            result = temp;
        }
    }
    return result;
}