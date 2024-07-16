#include <iostream>
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
            result *= operand[i + 1];
        } else if (operators[i] == "//") {
            result /= operand[i + 1];
        } else if (operators[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}