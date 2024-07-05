#include <iostream>
#include <vector>
#include <string>
#include <cmath> // for 'pow'
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
        } else if (operato[i] == "/") { // Changed from '//' to '/'
            result /= operand[i + 1];
        } else if (operato[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    cout << do_algebra({"/", "*"}, {24, 3, 4}) << endl; // Output should be 32
    return 0;
}