#include <iostream>
#include <vector>

using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int result = basement(nums);
    cout << result << endl;

    return 0;
}