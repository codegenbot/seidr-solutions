#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> operato, vector<int> operand) {
    int result = 0;
    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            result += operand[i];
        } else if (operato[i] == "-") {
            result -= operand[i];
        } else if (operato[i] == "*") {
            int temp = 1;
            for (int j = i; j < operato.size(); ) {
                if (operato[j] == "+") {
                    ++j;
                    continue;
                }
                if (operato[j] == "-") {
                    ++j;
                    continue;
                }
                if (operato[j] == "*") {
                    temp *= operand[j];
                    ++j;
                } else if (operato[j] == "/") {
                    temp /= operand[j];
                    ++j;
                } else if (operato[j] == "//") {
                    temp /= operand[j];
                    while(j < operato.size() && operato[j] == "//")
                        j++;
                } else if (operato[j] == "**") {
                    temp = pow(temp, operand[j]);
                    while(j < operato.size() && operato[j] == "**")
                        j++;
                }
            }
            result += temp;
        } else if (operato[i] == "//") {
            int temp = 1;
            for (int j = i; j < operato.size(); ) {
                if (operato[j] == "+") {
                    ++j;
                    continue;
                }
                if (operato[j] == "-") {
                    ++j;
                    continue;
                }
                if (operato[j] == "*") {
                    ++j;
                    continue;
                } else if (operato[j] == "/") {
                    temp /= operand[j];
                    while(j < operato.size() && operato[j] == "//")
                        j++;
                } else if (operato[j] == "//") {
                    temp /= operand[j];
                    while(j < operato.size() && operato[j] == "**")
                        j++;
                } else if (operato[j] == "**") {
                    temp = pow(temp, operand[j]);
                    while(j < operato.size() && operato[j] == "//")
                        j++;
                }
            }
            result += temp;
        } else if (operato[i] == "**") {
            int temp = 1;
            for (int j = i; j < operato.size(); ) {
                if (operato[j] == "+") {
                    ++j;
                    continue;
                }
                if (operato[j] == "-") {
                    ++j;
                    continue;
                }
                if (operato[j] == "*") {
                    temp *= operand[j];
                    while(j < operato.size() && operato[j] == "**")
                        j++;
                } else if (operato[j] == "/") {
                    temp /= operand[j];
                    while(j < operato.size() && operato[j] == "**")
                        j++;
                } else if (operato[j] == "//") {
                    temp /= operand[j];
                    while(j < operato.size() && operato[j] == "*")
                        j++;
                } else if (operato[j] == "**") {
                    temp = pow(temp, operand[j]);
                    while(j < operato.size() && operato[j] == "*")
                        j++;
                }
            }
            result += temp;
        }
    }
    return result;
}