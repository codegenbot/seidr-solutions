#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            result.push_back(nums[i]);
            result.push_back(complement);
            break;
        }
        numMap[nums[i]] = i;
    }

    return result;
}

int main() {
    int n, x1, x2, t;
    cin >> n;
    
    while (n--) {
        cin >> t;
        vector<int> nums(2);
        cin >> nums[0] >> nums[1];
        for (auto x : findPair(nums, t)) cout << x << " ";
        cout << endl;
    }
    
    return 0;
}