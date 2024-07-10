#include <vector>
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
            for (int j = i; j < operator_.size(); j++) {
                if (operator_[j] == "*") {
                    temp *= operand[j + 1];
                } else if (operator_[j] == "/") {
                    temp /= operand[j + 1];
                } else if (operator_[j] == "**") {
                    temp = pow(temp, operand[j + 1]);
                }
            }
            result += temp;
            i = j; // skip the rest of the loop
        } else if (operator_[i] == "/") {
            int temp = operand[i];
            for (int j = i + 1; j < operator_.size(); j++) {
                if (operator_[j] == "*") {
                    temp *= operand[j + 1];
                } else if (operator_[j] == "/") {
                    temp /= operand[j + 1];
                } else if (operator_[j] == "**") {
                    temp = pow(temp, operand[j + 1]);
                }
            }
            result += temp;
        } else if (operator_[i] == "**") {
            int temp = 1;
            for (int j = i; j < operator_.size(); j++) {
                if (operator_[j] == "*") {
                    temp *= operand[j + 1];
                } else if (operator_[j] == "/") {
                    temp /= operand[j + 1];
                } else if (operator_[j] == "**") {
                    temp = pow(temp, operand[j + 1]);
                }
            }
            result += pow(operand[0], temp);
        }
    }
    return result;
}