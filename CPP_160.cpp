#include <iostream>
#include <vector>
#include <cmath>

int do_algebra(std::vector<std::string> operator_, std::vector<int> operand) {
    if (operator_.size() != 2 || operand.size() < 2)
        return -1; // invalid input
    int result = operand[0];
    for (int i = 1; i < operand.size(); i++) {
        if (*operator_.begin() == "+") {
            result += operand[i];
        } else if (*operator_.begin() == "-") {
            result -= operand[i];
        } else if (*operator_.begin() == "*") {
            result *= operand[i];
        } else if (*operator_.begin() == "//") {
            if (result % operand[i] != 0)
                return -1; // division by zero
            result = result / operand[i];
        } else if (*operator_.begin() == "**") {
            result = pow(result, operand[i]);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
}