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
            if(operands[i] != 0) result = result / operands[i];
            else return 0;
        } else if (*operators.begin() == "**") {
            result = pow(result, operands[i]);
        }
    }
    return result;
}

int main() {
    vector<string> ops;
    vector<int> nums;
    
    int num;
    char operation;
    
    cout << "Enter operations (+, -, *, //, **), then numbers: ";
    cin >> operation;
    while(operation != '\n') {
        ops.push_back(string(1, operation));
        cin >> num >> operation;
    }
    for(int i = 0; i < ops.size(); i++) {
        ops[i] = "+";
    }

    cout << "The result is: " << doAlgebra(ops, nums) << endl;
    
    return 0;
}