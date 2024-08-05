#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int maxRight = numeric_limits<int>::min();
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    return leaders;
}

int main() {
    vector<int> input = {16, 17, 4, 3, 5, 2};
    vector<int> result = findLeaders(input);
    
    for (int leader : result) {
        cout << leader << " ";
    }
    
    return 0;
}