#include <vector>
#include <iostream>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n-1];
    
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i]; // Update maxRight
        }
    }
    
    leaders.push_back(nums[n-1]); // add the rightmost element as a leader
    return leaders;
}

int main() {
    vector<int> nums = {5, 3, 15, 8, 6, 10};
    vector<int> leaders = findLeaders(nums);

    cout << "Leaders: ";
    for (int leader : leaders) {
        cout << leader << " ";
    }
    cout << endl;

    return 0;
}