#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    int temp = 1;

    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += temp * operand[i];
        } else if (operator_[i] == "-") {
            result -= temp * operand[i];
        } else if (operator_[i] == "*") {
            temp *= operand[i];
        } else if (operator_[i] == "//") {
            temp = temp / operand[i];
        } else if (operator_[i] == "**") {
            temp = pow(temp, operand[i]);
        }
    }

    return result;
}

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);  
    return 0;
}