#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> ops, vector<int> nums) {
    int result = 0;
    long long temp = 1;

    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += temp * (long long)nums[i];
        } else if (ops[i] == "-") {
            result -= temp * (long long)nums[i];
        } else if (ops[i] == "*") {
            temp *= (long long)nums[i];
        } else if (ops[i] == "/") {
            temp /= (long long)nums[i];
        } else if (ops[i] == "^") {
            temp = pow(temp, nums[i]);
        }
    }

    return result;
}