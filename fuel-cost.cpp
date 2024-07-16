#include <vector>
#include <iostream>

using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = num / 3;
        newNum = (newNum > 0) ? newNum - 2 : 0;
        sum += newNum;
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
    cout << fuelCost(nums) << endl;
    return 0;
}