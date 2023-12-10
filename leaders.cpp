#include <iostream>
#include <vector>

using namespace std;

// Function to find leaders in a vector
vector<int> leaders(vector<int> nums) {
    // Initialize current leader and result vector
    int currentLeader = INT_MIN;
    vector<int> leaders;
    
    // Iterate through the input vector in reverse order
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] > currentLeader) {
            leaders.push_back(nums[i]);
            currentLeader = nums[i];
        }
    }
    
    return leaders;
}

int main() {
    // Input vector
    vector<int> nums = {1, 2, 3, 4, 5};
    
    // Call the leaders function and print the result
    vector<int> leaders = leaders(nums);
    for (int i = 0; i < leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    cout << endl;
    
    return 0;
}