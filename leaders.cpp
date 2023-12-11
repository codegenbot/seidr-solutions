#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {100, 50, 75, 80};
    vector<int> leaders;
    int max = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] > max) {
            max = nums[i];
            leaders.push_back(max);
        }
    }
    for (auto x : leaders) {
        cout << x << " ";
    }
    return 0;
}