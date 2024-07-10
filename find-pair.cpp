#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {complement, nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    cout << "(";
    for (int num : findPair(nums, target)) {
        cout << num << " ";
    }
    cout << ")" << endl;
    return 0;
}