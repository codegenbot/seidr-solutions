#include <vector>
#include <cmath>
#include <initializer_list>
using namespace std;

int do_algebra(vector<string> ops, vector<int> nums) {
    int result = 0;
    long long temp = 1;

    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += (int)(temp * nums[i]);
        } else if (ops[i] == "-") {
            result -= (int)(temp * nums[i]);
        } else if (ops[i] == "*") {
            temp *= nums[i];
        } else if (ops[i] == "/") {
            temp /= nums[i];
        } else if (ops[i] == "^") {
            temp = pow(temp, (double)nums[i]);
        }
    }

    return result;
}

int main() {
    int res = do_algebra({"+", 7, "*"}, {3}, {"*", 4});
    cout << "Result is: " << res << endl;
    return 0;
}