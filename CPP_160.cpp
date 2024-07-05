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
    vector<string> operato;
    vector<int> operand;
    string op;
    int num, count;

    cout << "Enter the number of operators: ";
    cin >> count;
    cout << "Enter operators: ";
    for (int i = 0; i < count; ++i) {
        cin >> op;
        operato.push_back(op);
    }

    cout << "Enter operands: ";
    for (int i = 0; i <= count; ++i) {
        cin >> num;
        operand.push_back(num);
    }

    cout << do_algebra(operato, operand) << endl;

    return 0;
}