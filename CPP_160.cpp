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
            int temp = operand[i];
            for (int j = i + 1; j < operator_.size(); j++) {
                if (operator_[j] == "+") {
                    temp *= operand[j];
                } else if (operator_[j] == "-") {
                    temp -= operand[j];
                } else if (operator_[j] == "*") {
                    int k = j;
                    while (k < operator_.size() && operator_[k] != "/") {
                        k++;
                    }
                    temp *= operand[k - 1];
                    i = k; // skip the rest of the loop
                } else if (operator_[j] == "/") {
                    int k = j;
                    while (k < operator_.size() && operator_[k] != "*") {
                        k++;
                    }
                    temp /= operand[k - 1];
                    i = k; // skip the rest of the loop
                } else if (operator_[j] == "**") {
                    int k = j;
                    while (k < operator_.size() && operator_[k] != "+") {
                        k++;
                    }
                    temp = pow(temp, operand[k - 1]);
                    i = k; // skip the rest of the loop
                }
            }
        } else if (operator_[i] == "/") {
            int temp = operand[i];
            for (int j = i + 1; j < operator_.size(); j++) {
                if (operator_[j] == "+") {
                    temp /= operand[j];
                } else if (operator_[j] == "-") {
                    temp -= operand[j];
                } else if (operator_[j] == "*") {
                    int k = j;
                    while (k < operator_.size() && operator_[k] != "/") {
                        k++;
                    }
                    temp /= operand[k - 1];
                    i = k; // skip the rest of the loop
                } else if (operator_[j] == "**") {
                    int k = j;
                    while (k < operator_.size() && operator_[k] != "+") {
                        k++;
                    }
                    temp = pow(temp, operand[k - 1]);
                    i = k; // skip the rest of the loop
                } else if (operator_[j] == "/") {
                    int k = j;
                    while (k < operator_.size() && operator_[k] != "*") {
                        k++;
                    }
                    temp /= operand[k - 1];
                    i = k; // skip the rest of the loop
                }
            }
        } else if (operator_[i] == "**") {
            int temp = operand[i];
            for (int j = i + 1; j < operator_.size(); j++) {
                if (operator_[j] == "+") {
                    temp = pow(temp, operand[j]);
                } else if (operator_[j] == "-") {
                    temp = pow(temp, -operand[j]);
                } else if (operator_[j] == "*") {
                    int k = j;
                    while (k < operator_.size() && operator_[k] != "/") {
                        k++;
                    }
                    temp = pow(temp, operand[k - 1]);
                    i = k; // skip the rest of the loop
                } else if (operator_[j] == "/") {
                    int k = j;
                    while (k < operator_.size() && operator_[k] != "*") {
                        k++;
                    }
                    temp = pow(temp, -operand[k - 1]);
                    i = k; // skip the rest of the loop
                } else if (operator_[j] == "**") {
                    int k = j;
                    while (k < operator_.size() && operator_[k] != "+") {
                        k++;
                    }
                    temp = pow(temp, operand[k - 1]);
                    i = k; // skip the rest of the loop
                }
            }
        }
    }
    return result;
}