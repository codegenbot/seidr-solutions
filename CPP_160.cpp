#include <vector>
#include <cmath>
using namespace std;

int do_algebra(vector<string> ops, vector<int> nums) {
    int result = 0;
    long long temp = 1;

    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += (int)(temp * (long long)nums[i]);
        } else if (ops[i] == "-") {
            result -= (int)(temp * (long long)nums[i]);
        } else if (ops[i] == "*") {
            temp *= nums[i];
        } else if (ops[i] == "/") {
            temp = temp / (long long)nums[i];
        } else if (ops[i] == "^") {
            temp = pow(temp, (double)nums[i]);
        }
    }

    return result;
}

int main() {
    int result = do_algebra({"+", 7, "*"}, {3}, {"*", 4});
    cout << "The algebraic expression is: ";
    for(int i = 0; i < 2; i++) {
        if(i > 0)cout << " ";
        cout << nums[i];
        if(i < ops.size() - 1)cout << " " << ops[i];
    }
    cout << endl;
    cout << "The result is: " << result << endl;
    return 0;
}