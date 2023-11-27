#include <vector>
#include <string>
#include <cmath>

int perform_algebra(const vector<string>& operators, const vector<int>& operands) {
    int result = operands[0];
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i+1];
        } else if (operators[i] == "-") {
            result -= operands[i+1];
        } else if (operators[i] == "*") {
            result *= operands[i+1];
        } else if (operators[i] == "//") {
            result /= operands[i+1];
        } else if (operators[i] == "**") {
            result = pow(result, operands[i+1]);
        }
    }
    return result;
}