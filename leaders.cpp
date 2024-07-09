#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>
using std::vector;
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    
    int maxRight = INT_MIN; // Initialize outside the loop
    
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] > maxRight) { // Use > for strict greater than
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end()); // Reverse after finding leaders
    
    return leaders;
}

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> result = findLeaders(nums);
    
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}