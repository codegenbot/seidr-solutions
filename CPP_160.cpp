```cpp
#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    int i = 0;
    while (i < operator_.size()) {
        if (operator_[i] == "+") {
            result += operand[i];
        } else if (operator_[i] == "-") {
            result -= operand[i];
        } else if (operator_[i] == "*") {
            int temp = operand[i];
            for (++i; i < operator_.size(); ++i) {
                if (operator_[i] == "*") {
                    temp *= operand[i];
                } else if (operator_[i] == "/") {
                    temp /= operand[i];
                }
            }
            result += temp;
        } else if (operator_[i] == "/") {
            int temp = operand[i];
            for (++i; i < operator_.size(); ++i) {
                if (operator_[i] == "*") {
                    temp *= operand[i];
                } else if (operator_[i] == "/") {
                    temp /= operand[i];
                }
            }
            result += temp;
        } else if (operator_[i] == "**") {
            int temp = operand[i];
            for (++i; i < operator_.size(); ++i) {
                if (operator_[i] == "*") {
                    temp *= operand[i];
                } else if (operator_[i] == "/") {
                    temp /= operand[i];
                }
            }
            result += pow(operand[0], temp);
        }
        ++i;
    }
    return result;
}