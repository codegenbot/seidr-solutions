#include <vector>
#include <cmath>

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i + 1];
        } else if (operator_[i] == "-") {
            result -= operand[i + 1];
        } else if (operator_[i] == "*") {
            result *= operand[i + 1];
        } else if (operator_[i] == "//" || operator_[i] == "÷") {
            if (operand[i + 1] != 0)
                result = result / static_cast<int>(operand[i + 1]);
            else
                return -1;  // handle division by zero error
        } else if (operator_[i] == "**" || operator_[i] == "^") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}