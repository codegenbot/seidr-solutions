```cpp
#include <vector>
#include <cmath>

int do_algorithms(vector<string> operators, vector<int> operands) {
    int result = 0;
    for (int i = 1; i < operands.size(); i++) {
        if (*operators.begin() == "+") {
            result += operands[i];
        } else if (*operators.begin() == "-") {
            result -= operands[i];
        } else if (*operators.begin() == "*") {
            result *= operands[i];
        } else if (*operators.begin() == "//") {
            result = result / operands[i];
        } else if (*operators.begin() == "**") {
            result = pow(result, operands[i]);
        }
    }
    return result;
}

int main() {
    vector<string> operators;
    vector<int> operands;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string op;
        int val;
        cin >> op >> val;
        operators.push_back(op);
        operands.push_back(val);
    }

    cout << do_algorithms(operators, operands) << endl;
    
    return 0;
}