#include <iostream>
#include <vector>
#include <string>
using namespace std;

int do_algebra(vector<string> ops, vector<int> operands) {
    int result = 0;
    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += operands[i];
        } else if (ops[i] == "-") {
            result -= operands[i];
        } else if (ops[i] == "*") {
            result *= operands[i];
        } else if (ops[i] == "/") {
            result /= operands[i];
        } else if (ops[i] == "**") {
            result = pow(operands[i], operands[i+1]);
        }
    }
    return result;
}