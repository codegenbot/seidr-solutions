#include <vector>
#include <cmath>
using namespace std;

int do_algebra(vector<string> ops, vector<int> nums) {
    int result = 0;
    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "+") {
            result += nums[i];
        } else if (ops[i] == "-") {
            result -= nums[i];
        } else if (ops[i] == "*") {
            result *= nums[i];
        } else if (ops[i] == "//" || ops[i] == "**") {
            int temp = 1;
            for(int j = 0; j < i; j++) {
                if(ops[j] == "*") 
                    temp *= nums[j]; 
                else if(ops[j] == "//")
                    temp /= nums[j];
                else
                    temp = pow((double)temp, (double)nums[j]);
            }
            result = temp;
        }
    }

    return result;
}

int main() {
    vector<string> ops = {"+", "+"};
    vector<int> nums = {2, 3};
    cout << do_algebra(ops, nums);
    return 0;
}