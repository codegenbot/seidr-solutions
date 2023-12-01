#include <vector>
#include <string>
#include <cmath>

int do_algebra(std::vector<std::string> operatoR, std::vector<int> operand) {
    int result = operand[0];

    for (int i = 0; i < operatoR.size(); i++) {
        if (operatoR[i] == "+") {
            result += operand[i + 1];
        }
        else if (operatoR[i] == "-") {
            result -= operand[i + 1];
        }
        else if (operatoR[i] == "*") {
            result *= operand[i + 1];
        }
        else if (operatoR[i] == "//") {
            result /= operand[i + 1];
        }
        else if (operatoR[i] == "**") {
            result = std::pow(result, operand[i + 1]);
        }
    }

    return result;
}