#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i + 1];
        } else if (operator_[i] == "-") {
            result -= operand[i + 1];
        } else if (operator_[i] == "*") {
            int temp = 1;
            for (int j = i + 1; j < operand.size(); j++) {
                temp *= operand[j];
            }
            result *= temp;
        } else if (operator_[i] == "//") {
            int temp = operand[i + 1];
            while (temp > 0) {
                result /= temp;
                temp--;
            }
        } else if (operator_[i] == "**") {
            int base = operand[i + 1], exponent = 0;
            for (; i < operator_.size() && j < operand.size(); i++, j++) {
                exponent += operand[j];
            }
            result = pow(base, exponent);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}