```cpp
#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = 0;
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i];
        } else if (operators[i] == "-") {
            result -= operands[i];
        } else if (operators[i] == "*") {
            int temp = operands[i];
            for (int j = i + 1; j < operators.size(); j++) {
                if (operators[j] == "+") {
                    temp += operands[j];
                } else if (operators[j] == "-") {
                    temp -= operands[j];
                } else if (operators[j] == "*") {
                    temp *= operands[j];
                } else if (operators[j] == "/") {
                    temp /= operands[j];
                }
            }
            result = temp;
        } else if (operators[i] == "/") {
            int temp = operands[i];
            for (int j = i + 1; j < operators.size(); j++) {
                if (operators[j] == "+") {
                    temp += operands[j];
                } else if (operators[j] == "-") {
                    temp -= operands[j];
                } else if (operators[j] == "*") {
                    temp *= operands[j];
                } else if (operators[j] == "/") {
                    temp /= operands[j];
                }
            }
            result = temp;
        }
    }
    return result;
}