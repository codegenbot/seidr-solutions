```
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

    int num_ops, num_nums;

    cin >> num_ops >> num_nums;

    for (int i = 0; i < num_ops; i++) {
        string op;
        cin >> op;
        ops.push_back(op);
    }

    for (int i = 0; i < num_nums; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    cout << do_algebra(ops, nums) << endl;

    return 0;
}