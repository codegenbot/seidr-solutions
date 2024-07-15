#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    pair<int, int> result = {-1, -1};
    // Add your logic to find the pair that sums to target
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    
    pair<int, int> result = findPair(nums, target);
    
    if (result.first != -1 && result.second != -1) {
        cout << nums[result.first] << endl;
        cout << nums[result.second] << endl;
    } else {
        cout << "Pair not found." << endl;
    }
    
    return 0;
}