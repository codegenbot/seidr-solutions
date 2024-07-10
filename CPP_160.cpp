#include <iostream>
#include <vector>
#include <cmath>

int do_algebra(std::vector<std::string> operator_, std::vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i + 1];
        } else if (operator_[i] == "-") {
            result -= operand[i + 1];
        } else if (operator_[i] == "*") {
            result *= operand[i + 1];
        } else if (operator_[i] == "//") {
            result = result / operand[i + 1];
        } else if (operator_[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}