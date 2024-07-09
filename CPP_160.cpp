#include <vector>
#include <string>
#include <cmath>

int do_algebra(std::vector<std::string> operator, std::vector<int> operand){
    int result = operand[0];
    for (int i = 0; i < operator.size(); ++i) {
        if (operator[i] == "+") {
            result += operand[i + 1];
        } else if (operator[i] == "-") {
            result -= operand[i + 1];
        } else if (operator[i] == "*") {
            result *= operand[i + 1];
        } else if (operator[i] == "//") {
            result /= operand[i + 1];
        } else if (operator[i] == "**") {
            result = std::pow(result, operand[i + 1]);
        }
    }
    return result;
}