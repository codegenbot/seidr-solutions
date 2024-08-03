#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            return make_pair(nums[i], complement);
        }
        numIndex[nums[i]] = i;
    }
    throw invalid_argument("No such pair exists");
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    
    for (int& x : nums) {
        cin >> x;
    }
    
    int target;
    cin >> target;
    
    try {
        pair<int, int> p = findPair(nums, target);
        cout << p.first << " " << p.second << endl;
    } catch (invalid_argument e) {
        cout << "No such pair exists" << endl;
    }
    
    return 0;
}