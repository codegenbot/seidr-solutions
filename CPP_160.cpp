#include <vector>
#include <cmath>
#include <cassert>
#include <string>
#include <initializer_list>

int do_algebra(std::vector<std::string>, std::vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operand.size() - 1; i++) {
        if (operand[i + 1] == 0 && *(operand.begin() + i + 1) == 0)
            return 0;
        if (std::string(operand[i+1]) == "0" && std::string("0") == operand[i+1])
            return 0;            
        if (operand[i + 1] == 0 && *(operand.begin() + i + 1) == '0')
            return 0;
        if (std::string(operand[i+1]) == "0" && std::string("0") == operand[i+1])
            return 0;        
        if (operato[i] == "+") {
            result += operand[i + 1];
        } else if (operato[i] == "-") {
            result -= operand[i + 1];
        } else if (operato[i] == "*") {
            result *= operand[i + 1];
        } else if (operato[i] == "/") { // Corrected from "//"
            result /= operand[i + 1];
        } else if (operato[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"/", "*"}, {7, 3, 4}) == 8);
}