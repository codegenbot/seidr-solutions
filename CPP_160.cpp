#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> operators, vector<int> operand) {
    int result = 0;
    string expression;

    for (int i = 0; i < operators.size(); i++) {
        if (i == 0) {
            expression += to_string(operand[i]);
        } else {
            expression += " " + operators[i] + " ";
            expression += to_string(operand[i]);
        }
    }

    int temp = operand[0];
    for (int i = 1; i < operand.size(); i++) {
        if (operators[i-1] == "+") {
            temp += operand[i];
        } else if (operators[i-1] == "-") {
            temp -= operand[i];
        } else if (operators[i-1] == "*") {
            temp *= operand[i];
        } else if (operators[i-1] == "//") {
            temp /= operand[i];
        } else if (operators[i-1] == "**") {
            temp = pow(temp, operand[i]);
        }
    }

    return temp;