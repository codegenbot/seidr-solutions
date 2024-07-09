#include <vector>
#include <cmath>
#include <initializer_list>
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
            if(nums[i] == 0) return -1; // handle division by zero
            temp /= nums[i];
        } else if (ops[i] == "^") {
            double x = static_cast<double>(temp);
            temp = pow(x, static_cast<double>(nums[i])); // use long double for power operation
        }
    }

    return result;
}