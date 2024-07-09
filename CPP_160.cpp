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
        } else if (operator_[i] == "//" || operator_[i] == "/") { // Changed from "//" to "/"
            if(operand[i+1] != 0) 
                result = result / operand[i + 1]; // avoid division by zero
            else 
                result = INT_MAX; 
        } else if (operator_[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    vector<string> operator_;
    vector<int> operand;

    int n, op_count = 0;
    
    cout << "Enter the number of operands: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter the value of operand "<<i+1<<": ";
        cin >> x;
        operand.push_back(x);
    }

    int op_num;
    cout << "Enter the number of operators: ";
    cin >> op_num;

    for(int i = 0; i < op_num; i++) {
        string op;
        cout << "Enter the operator ( +, -, *, / ): ";
        cin >> op;
        operator_.push_back(op);
    }
    
    int result = do_algebra(operator_, operand);
    cout << "Result: " << result << endl;

    return 0;
}