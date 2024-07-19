#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int do_algebra(vector<string> operatOr, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operatOr.size(); ++i) {
        if (operatOr[i] == "+") {
            result += operand[i + 1];
        } else if (operatOr[i] == "-") {
            result -= operand[i + 1];
        } else if (operatOr[i] == "*") {
            result *= operand[i + 1];
        } else if (operatOr[i] == "/") {
            result /= operand[i + 1];
        } else if (operatOr[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}