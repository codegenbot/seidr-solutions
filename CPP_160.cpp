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
    int num;

    while (cin >> op) {
        if (op == "=") break;
        operato.push_back(op);
        cin >> num;
        operand.push_back(num);
    }

    int result = operand[0];
    operand.erase(operand.begin());
    cout << do_algebra(operato, operand) << endl;
    return 0;
}