```cpp
#include <iostream>
#include <vector>
#include <cmath>

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
            if(nums[i] == 0)
                throw runtime_error("Cannot divide by zero");
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
        string strNum;
        
        cout << "Enter operation (+, -, *, /, ^): ";
        cin >> op;
        cout << "Enter number: ";
        cin >> strNum;
        int num = std::stoi(strNum);
        
        ops.push_back(op);
        nums.push_back(num);
    }

    try {
        cout << "Result: " << do_algebra(ops, nums) << endl;
    } catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }

    return 0;
}