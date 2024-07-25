#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> ops, vector<int> operand) {
    int result = 0;
    string expression;

    for (int i = 0; i < ops.size(); i++) {
        if (i == 0) {
            expression += to_string(operand[i]);
        } else {
            expression += " " + ops[i] + " ";
            expression += to_string(operand[i+1]);
        }
    }

    int temp = operand[0];
    for (int i = 1; i < operand.size()-1; i++) {
        if (ops[i-1] == "+") {
            temp += operand[i];
        } else if (ops[i-1] == "-") {
            temp -= operand[i];
        } else if (ops[i-1] == "*") {
            temp *= operand[i];
        } else if (ops[i-1] == "/") {
            temp /= operand[i];
        } else if (ops[i-1] == "^") {
            temp = pow(temp, operand[i]);
        }
    }

    return temp;
}