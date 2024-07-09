#include <iostream>
#include <vector>
#include <cmath>

int do_algebra(std::vector<std::string> operator_, std::vector<int> operand) {
    int result = operand[0];
    for (int i = 1; i <= operator_.size(); i++) {
        if (operator_[i - 1] == "+") {
            result += operand[i];
        } else if (operator_[i - 1] == "-") {
            result -= operand[i];
        } else if (operator_[i - 1] == "*") {
            result *= operand[i];
        } else if (operator_[i - 1] == "//") {
            result = result / operand[i];
        } else if (operator_[i - 1] == "**") {
            result = pow(result, operand[i]);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> operator_;
    std::vector<int> operand;

    operator_.push_back("+");
    operator_.push_back("//");
    operand.push_back(7);
    operand.push_back(3);
    operand.push_back(2);

    int result = do_algebra(operator_, operand);

    return 0;
}