#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    vector<int> result = {-1, -1};
    return result;
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
    
    vector<int> result = findPair(nums, target);

    if(result[0] != -1) {
        cout << result[0] << " ";
        cout << result[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}