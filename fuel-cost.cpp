#include <iostream>
#include <vector>
using namespace std;

int calculateFuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }
    return sum;
}

int main() {
    // Read input
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    // Calculate and output result
    cout << calculateFuelCost(nums) << endl;
    
    return 0;
}