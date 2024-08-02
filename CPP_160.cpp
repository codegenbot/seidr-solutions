#include <vector>
#include <cmath>

int do_algebra(std::vector<std::string> operator_, std::vector<int> operands) {
    int result = 0;
    double prev_operand = (double)operands[0];
    for(int i = 1; i < operands.size(); i++) {
        if(operator_[i-1] == "+") {
            result += prev_operand;
        } else if(operator_[i-1] == "-") {
            result -= prev_operand;
        } else if(operator_[i-1] == "*") {
            result *= prev_operand;
        } else if(operator_[i-1] == "//") {
            result = (int)(result / prev_operand);
        } else if(operator_[i-1] == "**") {
            result = pow((double)result, prev_operand);
        }
        prev_operand = (double)operands[i];
    }
    return result;
}