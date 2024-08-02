#include <vector>
#include <iostream>

using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        result = max(0, result); // round down to nearest integer
        sum += result - 2; // subtract 2 and add to sum
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