```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int do_algebra(vector<string> ops, vector<int> nums) {
    int result = 0;
    double temp = 1.0; // changed from long long to double

    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += temp * nums[i];
        } else if (ops[i] == "-") {
            result -= temp * nums[i];
        } else if (ops[i] == "*") {
            temp *= nums[i];
        } else if (ops[i] == "/") {
            temp /= static_cast<double>(nums[i]); // used cast to double
        } else if (ops[i] == "^") {
            temp = pow(temp, static_cast<double>(nums[i])); // used cast to double
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
        string strNum;

        cout << "Enter operation (+, -, *, /, ^): ";
        cin >> op;
        cout << "Enter number: ";
        cin >> strNum;
        int num = stoi(strNum);
        
        ops.push_back(op);
        nums.push_back(num);
    }

    cout << "Result: " << do_algebra(ops, nums) << endl;

    return 0;
}