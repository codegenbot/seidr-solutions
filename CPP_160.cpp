#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int do_algebra(vector<string> ops, vector<int> nums) {
    int result = 0;
    long long temp = 1;

    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += temp * nums[i];
        } else if (ops[i] == "-") {
            result -= temp * nums[i];
        } else if (ops[i] == "*") {
            temp *= nums[i];
        } else if (ops[i] == "/") {
            temp /= nums[i];
        } else if (ops[i] == "^") {
            temp = pow(temp, nums[i]);
        }
    }

    return result;
}

int main() {
    vector<string> ops;
    vector<int> nums;

    cout << "Enter number of operations: ";
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string op;
        string strOp, strNum;

        cout << "Enter operation (+, -, *, /, ^): ";
        cin >> strOp;
        
        cout << "Enter number: ";
        cin >> strNum;
        
        try {
            int num = stoi(strNum);
            ops.push_back(strOp);
            nums.push_back(num);
        } catch (invalid_argument e) {
            // Handle non-integer values
        }
    }

    cout << "Result: " << do_algebra(ops, nums) << endl;

    return 0;
}