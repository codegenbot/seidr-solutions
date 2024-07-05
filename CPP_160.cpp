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
            if (operand[i + 1] == 0) {
                cerr << "Error: Division by zero." << endl;
                return 0;
            }
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

    int n;
    cin >> n;
    operato.resize(n);
    operand.resize(n + 1);

    for(int i = 0; i < n; ++i) {
        cin >> operato[i];
    }
    for(int i = 0; i <= n; ++i) {
        cin >> operand[i];
    }

    cout << do_algebra(operato, operand) << endl;
    return 0;
}