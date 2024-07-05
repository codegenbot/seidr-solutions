#include <iostream>
#include <vector>
#include <string>
#include <cmath>

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
        } else if (operato[i] == "/") {
            result /= operand[i + 1];
        } else if (operato[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    vector<string> operato;
    vector<int> operand;
    string op;
    int num, n;

    cout << "Enter number of operations: ";
    cin >> n;

    cout << "Enter operands: ";
    for (int i = 0; i <= n; i++) {
        cin >> num;
        operand.push_back(num);
    }

    cout << "Enter operators: ";
    for (int i = 0; i < n; i++) {
        cin >> op;
        operato.push_back(op);
    }

    cout << "Result: " << do_algebra(operato, operand) << endl;

    return 0;
}