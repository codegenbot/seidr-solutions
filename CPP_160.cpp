#include <vector>
#include <cmath>
#include <cassert>

int do_algebra(const vector<string>& operato, const vector<int>& operand) {
    int result = operand[0];
    for (int i = 1; i < operand.size(); ++i) {
        if (operato[i - 1] == "+") {
            result += operand[i];
        } else if (operato[i - 1] == "-") {
            result -= operand[i];
        } else if (operato[i - 1] == "*") {
            result *= operand[i];
        } else if (operato[i - 1] == "//") {
            result = result / operand[i];
        } else if (operato[i - 1] == "**") {
            result = pow(result, operand[i]);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;