#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = 0;
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i];
        } else if (operators[i] == "-") {
            result -= operands[i];
        } else if (operators[i] == "*") {
            int temp = 0;
            for (int j = i; j < operands.size(); j++) {
                temp += operands[j];
                if (j < operands.size() - 1) {
                    if (operators[j + 1] == "*") {
                        temp *= operands[j + 1];
                    } else if (operators[j + 1] == "//") {
                        temp = temp / operands[j + 1];
                    } else if (operators[j + 1] == "**") {
                        temp = pow(temp, operands[j + 1]);
                    }
                }
            }
            result = temp;
        } else if (operators[i] == "//") {
            int temp = operands[i - 1];
            for (int j = i; j < operands.size(); j++) {
                temp /= operands[j];
            }
            result = temp;
        } else if (operators[i] == "**") {
            int temp = pow(operands[i - 1], 1);
            for (int j = i; j < operands.size(); j++) {
                temp = pow(temp, operands[j]);
            }
            result = temp;
        }
    }
    return result;
}