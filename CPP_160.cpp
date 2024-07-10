```cpp
#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = 0;
    int sign = 1;
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += sign * operands[i];
        } else if (operators[i] == "-") {
            result -= sign * operands[i];
            sign = -1;
        } else if (operators[i] == "*") {
            int temp = 0;
            for (int j = i; j < operators.size(); j++) {
                if (j < operators.size() - 1 && operators[j + 1] == "*") {
                    temp *= operands[j + 1];
                } else if (j < operators.size() - 1 && operators[j + 1] == "/") {
                    temp /= operands[j + 1];
                }
            }
            result += sign * temp;
        } else if (operators[i] == "/") {
            int temp = operands[i];
            for (int j = i + 1; j < operators.size(); j++) {
                if (j < operators.size() - 1 && operators[j + 1] == "*") {
                    temp *= operands[j + 1];
                } else if (j < operators.size() - 1 && operators[j + 1] == "/") {
                    temp /= operands[j + 1];
                }
            }
            result += sign / temp;
        }
    }
    return result;
}