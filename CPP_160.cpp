#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int do_algebra(const vector<string>& operato, const vector<int>& operand) {
    int result = operand[0];
    for (size_t i = 0; i < operato.size(); ++i) {
        if (operato[i] == "+") {
            result += operand[i + 1];
        } else if (operato[i] == "-") {
            result -= operand[i + 1];
        } else if (operato[i] == "*") {
            result *= operand[i + 1];
        } else if (operato[i] == "/") {
            result /= operand[i + 1];
        } else if (operato[i] == "**") {
            result = static_cast<int>(pow(result, operand[i + 1]));
        }
    }
    return result;
}

int main() {
    vector<string> operato = {"+", "*", "-", "**", "/"};
    vector<int> operand = {2, 3, 4, 2, 2, 5};
    cout << do_algebra(operato, operand) << endl;
    return 0;
}