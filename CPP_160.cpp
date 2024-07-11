```
#include <vector>
#include <cmath>

int doAlgebra(vector<string> operators, vector<int> operands) {
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
    vector<string> operators = {"+", "*", "+"};
    vector<int> operands = {2, 3, 4};
    cout << doAlgebra(operators, operands) << endl;
    return 0;
}