#include <iostream>
#include <vector>
#include <cmath>
#include <string>

int do_algebra(vector<std::string> operato, vector<int> operand) {
    int result = operand[0];
    for (int i = 1; i <= operato.size(); i++) {
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

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    std::cout << "Testing successful." << std::endl;
    return 0;
}