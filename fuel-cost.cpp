#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int fuelCost(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        int result = floor(nums[i] / 3) - 2;
        sum += result;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int result = fuelCost(nums);
    cout << result << endl;
    return 0;
}