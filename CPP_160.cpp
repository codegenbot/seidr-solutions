#include <vector>
#include <cmath>
#include <string>
using namespace std;

int do_algebra(vector<string> ops, vector<int> nums) {
    int result = 0;
    int temp = 1;

    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += temp * nums[i];
        } else if (ops[i] == "-") {
            result -= temp * nums[i];
        } else if (ops[i] == "*") {
            temp *= nums[i];
        } else if (ops[i] == "/") {  // use "/" instead of "//"
            temp /= nums[i];
        }
    }

    return result;
}

int main() {
    int assertResult = do_algebra({"+", "/"}, {7, 3, 4});
    if (assertResult == 8) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

    return 0;
}