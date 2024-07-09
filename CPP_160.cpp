#include <vector>
#include <cmath>

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    if (operand.size() != operator_.size() + 1) {
        return -1; // Invalid input
    }
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i + 1];
        } else if (operator_[i] == "-") {
            result -= operand[i + 1];
        } else if (operator_[i] == "*") {
            result *= operand[i + 1];
        } else if (operator_[i] == "//") {
            if(operand[i+1] == 0) return -1; // Division by zero
            result = result / operand[i + 1];
        } else if (operator_[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}