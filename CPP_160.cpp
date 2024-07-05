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
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    int n, m;
    cin >> n;
    vector<string> operato(n);
    for (int i = 0; i < n; ++i) {
        cin >> operato[i];
    }
    cin >> m;
    vector<int> operand(m);
    for (int i = 0; i < m; ++i) {
        cin >> operand[i];
    }
    cout << do_algebra(operato, operand) << endl;
    return 0;
}