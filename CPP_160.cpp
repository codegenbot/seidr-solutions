#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> operators, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operand[i + 1];
        } else if (operators[i] == "-") {
            result -= operand[i + 1];
        } else if (operators[i] == "*") {
            int temp = 0;
            for (int j = i + 1; j < operand.size(); j++) {
                temp += operand[j];
            }
            result *= temp;
        } else if (operators[i] == "//") {
            int temp = 0;
            for (int j = i + 1; j < operand.size(); j++) {
                temp += operand[j];
            }
            result /= temp;
        } else if (operators[i] == "**") {
            int base = operand[i + 1];
            int exponent = 0;
            for (int j = i + 2; j < operand.size(); j++) {
                exponent += operand[j];
            }
            result = pow(base, exponent);
        }
    }
    return result;
}