#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int do_alphabet(vector<string> operator_, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i + 1];
        } else if (operator_[i] == "-") {
            result -= operand[i + 1];
        } else if (operator_[i] == "*") {
            int temp = 0;
            for (int j = i + 1; j < operand.size(); j++) {
                temp += operand[j];
            }
            result *= temp;
        } else if (operator_[i] == "//") {
            if (temp(0) == 0) return 0;
            int temp = 0;
            for (int j = i + 1; j < operand.size(); j++) {
                temp += operand[j];
            }
            result /= temp;
        } else if (operator_[i] == "**") {
            if(i+2 >= operand.size()) return -1;
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

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}