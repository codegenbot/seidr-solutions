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
    int n;
    cin >> n;
    vector<string> operato(n);
    vector<int> operand(n + 1);
    for(int i = 0; i < n; ++i) {
        cin >> operato[i];
    }
    for(int i = 0; i < n + 1; ++i) {
        cin >> operand[i];
    }
    cout << do_algebra(operato, operand) << endl;
    return 0;
}