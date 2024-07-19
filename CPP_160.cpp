#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

int do_algebra(std::vector<std::string> operaotr, std::vector<int> operand){
    int result = operand[0];
    for (int i = 0; i < operaotr.size(); ++i) {
        if (operaotr[i] == "+") {
            result += operand[i + 1];
        } else if (operaotr[i] == "-") {
            result -= operand[i + 1];
        } else if (operaotr[i] == "*") {
            result *= operand[i + 1];
        } else if (operaotr[i] == "//") {
            result /= operand[i + 1];
        } else if (operaotr[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}