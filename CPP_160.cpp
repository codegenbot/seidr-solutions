#include <vector>
#include <cmath>

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = 0;
    double prev_operand = (double)operands[0];
    for(int i = 1; i < operands.size(); i++) {
        if(operators[i-1] == "+") {
            result += prev_operand;
        } else if(operators[i-1] == "-") {
            result -= prev_operand;
        } else if(operators[i-1] == "*") {
            result *= prev_operand;
        } else if(operators[i-1] == "//") {
            result = (int)(result / prev_operand);
        } else if(operators[i-1] == "**") {
            result = pow(result, prev_operand);
        }
        prev_operand = (double)operands[i];
    }
    return result;
}