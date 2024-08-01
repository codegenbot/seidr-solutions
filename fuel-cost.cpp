#include <vector>
#include <iostream>

using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        sum += min(result, 0) - 2; // round down to nearest integer and subtract 2
    }
    return sum;
}

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    cout << fuelCost(nums) << endl;
    return 0;
}