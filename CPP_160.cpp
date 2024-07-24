#include <iostream>
#include <vector>
#include <cmath>

int do_algebra(std::vector<std::string> op, std::vector<int> operand) {
    int result = 0;
    for (int i = 1; i < operand.size(); i++) {
        if (op[0] == "+") {
            result += operand[i];
        } else if (op[0] == "-") {
            result -= operand[i];
        } else if (op[0] == "*") {
            result *= operand[i];
        } else if (op[0] == "//") {
            result = result / operand[i];
        } else if (op[0] == "**") {
            result = pow(result, operand[i]);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"+"}, {7, 3}) == 10);
    assert(do_algebra({"/"}, {4, 2}) == 2);
    assert(do_algebra({"*"}, {4, 2}) == 8);
    std::cout << "All assertions passed.\n";
    return 0;
}