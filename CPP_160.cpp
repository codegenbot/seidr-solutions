```cpp
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
            temp /= stoi(to_string(nums[i]));
        } else if (ops[i] == "^") {
            temp = pow(temp, stoi(to_string(nums[i])));
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
        
        try {
            int num = stoi(strNum);
            ops.push_back(op);
            nums.push_back(num);
        } catch (invalid_argument e) {
            cout << "Invalid input. Please enter an integer." << endl;
            i--;
        }
    }

    cout << "Result: " << do_algebra(ops, nums) << endl;

    return 0;
}