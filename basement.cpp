#include <iostream>
#include <vector>
using namespace std;

long long basement(vector<int>& nums) {
    long long sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 2, -3, 4, 5};
    long long result = basement(nums);
    cout << result << endl;
    return 0;
}