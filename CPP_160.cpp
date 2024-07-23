#include <vector>
#include <cmath>
#include <cassert>

int do_algebra(vector<string> operato, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            result += operand[i + 1];
        } else if (operato[i] == "-") {
            result -= operand[i + 1];
        } else if (operato[i] == "*") {
            result *= operand[i + 1];
        } else if (operato[i] == "//") {
            result = result / static_cast<int>(operand[i + 1]);
        } else if (operato[i] == "**") {
            result = pow(result, static_cast<double>(operand[i + 1]));
        }
    }
    return result;
}

int test_algebra() {
    assert (do_algebra({string("//"), string("*")}, {7, 3, 4}) == 8);
    return 0;
}