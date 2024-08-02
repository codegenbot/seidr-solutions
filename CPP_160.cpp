#include <vector>
#include <cmath>

int do_algebra(std::vector<std::string> operator_, std::vector<int> operands) {
    int result = (int)operands[0];
    for(int i = 1; i < operands.size(); i++) {
        if(operator_[i-1] == "+") {
            result += (int)operands[i];
        } else if(operator_[i-1] == "-") {
            result -= (int)operands[i];
        } else if(operator_[i-1] == "*") {
            result *= (int)operands[i];
        } else if(operator_[i-1] == "//") {
            result = (int)(result / (double)operands[i]);
        } else if(operator_[i-1] == "**") {
            result = pow((double)result, (double)operands[i]);
        }
    }
    return result;
}