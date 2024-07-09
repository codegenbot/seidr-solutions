#include <iostream>
using namespace std;

class _160 {
public:
    int do_algebra(vector<string> ops, vector<int> nums) {
        int result = 0;
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == "+") {
                result += nums[i];
            } else if (ops[i] == "*") {
                result *= nums[i];
            }
        }
        return result;
    }
};

int main() {
    _160 obj;
    cout << obj.do_algebra({"*", "//"}, {7, 3, 4}) << endl;
}