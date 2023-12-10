#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

vector<int> find_pair(vector<int>& nums, int target) {
    vector<int> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (nums.count(complement)) {
            result.push_back(nums[i]);
            result.push_back(complement);
            break;
        }
    }
    
    return result;
}

int main() {
    vector<int> nums = {5, 7};
    int target = 12;
    vector<int> pair = find_pair(nums, target);
    
    cout << "The two elements that sum to " << target << " are ";
    for (int i = 0; i < pair.size(); i++) {
        if (i > 0) {
            cout << " and ";
        }
        cout << pair[i];
    }
    cout << endl;
    
    return 0;
}