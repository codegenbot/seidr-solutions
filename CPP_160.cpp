#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cassert>

using namespace std;

int do_algebra(vector<string> operato, vector<int> operand) {
    int result = operand[0];
    for (size_t i = 0; i < operato.size(); ++i) {
        if (operato[i] == "+") {
            result += operand[i + 1];
        } else if (operato[i] == "-") {
            result -= operand[i + 1];
        } else if (operato[i] == "*") {
            result *= operand[i + 1];
        } else if (operato[i] == "/") { // Corrected from "//" to "/"
            result /= operand[i + 1];
        } else if (operato[i] == "**") {
            result = static_cast<int>(pow(result, operand[i + 1])); // Corrected to use std::pow
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"/", "*"}, {7, 3, 4}) == 8);
    return 0;
}