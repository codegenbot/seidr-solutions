#include <iostream>
#include <vector>
using namespace std;

long long basement(vector<int>& nums) {
    long long sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum <= 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {15, 99, -90, 59, -69, 36, -90, 96, 55, -95, -12, -45, -99, -8, -48, -95};
    int result = basement(nums);
    cout << result << endl;
    return 0;
}