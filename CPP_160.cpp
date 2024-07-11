#include <iostream>
#include <vector>
#include <cmath>

int do_alphabet(std::vector<std::string>, std::vector<int>) {
    int result = *(operand.begin());
    for (int i = 1; i < operand.size(); i++) {
        if (*operator_.begin() == "+") {
            result += operand[i];
        } else if (*operator_.begin() == "-") {
            result -= operand[i];
        } else if (*operator_.begin() == "*") {
            result *= operand[i];
        } else if (*operator_.begin() == "//") {
            result = result / static_cast<int>(operand[i]);
        } else if (*operator_.begin() == "**") {
            result = pow(result, operand[i]);
        }
    }
    return result;
}

int main() {
    assert(do_alphabet({"+"}, {2}) == 2);
    return 0;
}