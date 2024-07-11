```cpp
#include <iostream>
#include <vector>
#include <cmath>

int do_algebra(std::vector<std::string>, std::vector<int>) {
    int result = *(operand.begin());
    for (int i = 1; i < operand.size(); i++) {
        if (*operator_.begin() == "+") {
            result += operand[i];
        } else if (*operator_.begin() == "-") {
            result -= operand[i];
        } else if (*operator_.begin() == "*") {
            result *= operand[i];
        } else if (*operator_.begin() == "//") {
            result = result / operand[i];
        } else if (*operator_.begin() == "**") {
            result = pow(result, operand[i]);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
}