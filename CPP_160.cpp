#include <iostream>
#include <vector>
#include <string>
using namespace std;

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i + 1];
        } else if (operator_[i] == "-") {
            result -= operand[i + 1];
        } else if (operator_[i] == "*") {
            result *= operand[i + 1];
        } else if (operator_[i] == "//") {
            result = result / operand[i + 1];
        } else if (operator_[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    vector<string> operators;
    vector<int> operands;

    int numOperators, numOperands;
    cin >> numOperators >> numOperands;

    for (int i = 0; i < numOperators; i++) {
        string op;
        cin >> op;
        operators.push_back(op);
    }

    for (int i = 0; i < numOperands; i++) {
        int operand;
        cin >> operand;
        operands.push_back(operand);
    }

    cout << do_algebra(operators, operands) << endl;

    return 0;
}