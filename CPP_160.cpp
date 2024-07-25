```cpp
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
            for (int j = i; j < operato.size(); j++) {
                if (operato[j] == "*" || operato[j] == "**") {
                    temp *= operand[j];
                } else if (operato[j] == "/") {
                    temp /= operand[j];
                }
            }
            result += temp;
        } else if (operato[i] == "//") {
            int temp = 1;
            for (int j = i; j < operato.size(); j++) {
                if (operato[j] == "//") {
                    temp /= operand[j];
                } else if (operato[j] == "**") {
                    temp = pow(temp, operand[j]);
                }
            }
            result += temp;
        } else if (operato[i] == "**") {
            int temp = 1;
            for (int j = i; j < operato.size(); j++) {
                if (operato[j] == "*" || operato[j] == "//" || operato[j] == "**") {
                    temp *= pow(temp, operand[j]);
                } else if (operato[j] == "/") {
                    temp /= operand[j];
                }
            }
            result += temp;
        }
    }
    return result;
}