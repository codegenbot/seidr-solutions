#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int do_algebra(std::vector<std::string> operato, std::vector<int> operand) {
    int result = 0;
    for (int i = 1; i < operand.size(); i++) {
        if (operato[i-1] == "+") {
            result += operand[i];
        } else if (operato[i-1] == "-") {
            result -= operand[i];
        } else if (operato[i-1] == "*") {
            result *= operand[i];
        } else if (operato[i-1] == "//") {
            result = result / operand[i];
        } else if (operato[i-1] == "**") {
            result = pow(result, operand[i]);
        }
    }
    return result;
}