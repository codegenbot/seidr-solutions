#include <iostream>
#include <vector>
#include <cmath>

int do_algebra(std::vector<std::string> operato, std::vector<int> operand) {
    int result = 0;
    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            result += operand[i];
        } else if (operato[i] == "-") {
            result -= operand[i];
        } else if (operato[i] == "*") {
            int temp = 1;
            for (int j = i; j < operato.size(); j++) {
                if (operato[j] == "*") {
                    temp *= operand[j];
                } else if (operato[j] == "/") {
                    temp /= operand[j];
                } else if (operato[j] == "**") {
                    temp = pow(temp, operand[j]);
                }
            }
            result += temp;
        } else if (operato[i] == "/") {
            int temp = operand[i];
            for (int j = i+1; j < operato.size(); j++) {
                if (operato[j] == "*") {
                    temp *= operand[j];
                } else if (operato[j] == "/") {
                    temp /= operand[j];
                } else if (operato[j] == "**") {
                    temp = pow(temp, operand[j]);
                }
            }
            result /= temp;
        } else if (operato[i] == "//") {
            int temp = operand[i];
            for (int j = i+1; j < operato.size(); j++) {
                if (operato[j] == "*") {
                    temp *= operand[j];
                } else if (operato[j] == "/") {
                    temp /= operand[j];
                } else if (operato[j] == "**") {
                    temp = pow(temp, operand[j]);
                }
            }
            result /= temp;
        } else if (operato[i] == "**") {
            int temp = 1;
            for (int j = i; j < operato.size(); j++) {
                if (operato[j] == "*") {
                    temp *= operand[j];
                } else if (operato[j] == "/") {
                    temp /= operand[j];
                } else if (operato[j] == "**") {
                    temp = pow(temp, operand[j]);
                }
            }
            result = temp;
        }
    }
    return result;
}