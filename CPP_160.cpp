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
            result = int(double(result) / operand[i + 1]);
        } else if (operator_[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> operator_;
    std::vector<int> operand;

    // Input your values here
    operator_.push_back("//");
    operator_.push_back("*");
    operator_.push_back("+");
    operand.push_back(7);
    operand.push_back(3);
    operand.push_back(4);

    int result = do_algebra(operator_, operand);

    std::cout << "The output is: " << result;

    return 0;
}