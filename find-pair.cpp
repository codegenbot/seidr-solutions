#include <iostream> 
#include <vector>  
#include <unordered_map>

using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    throw runtime_error("No such pair exists in the given vector and target");
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    
    try {
        pair<int, int> result = findPair(nums, target);
        cout << result.first << " " << result.second << endl;
    } catch(runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}