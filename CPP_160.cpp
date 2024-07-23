#include <vector>
#include <string>

int do_algebra(std::vector<std::string> operato, std::vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            result += operand[i + 1];
        } else if (operato[i] == "-") {
            result -= operand[i + 1];
        } else if (operato[i] == "*") {
            result *= operand[i + 1];
        } else if (operato[i] == "//") {
            if(operand[i+1] != 0) {
                result = result / operand[i + 1];
            } else {
                return -1; // or throw an exception
            }
        } else if (operato[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}