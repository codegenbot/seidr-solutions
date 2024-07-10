#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    for(int i = 0; i < nums.size(); i++){
        int complement = target - nums[i];
        if(mp.find(complement) != mp.end()){
            return {complement,nums[i]};
        }
        mp[nums[i]] = i;
    }
    vector<int> result;
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    pair<int,int> p = findPair(nums, target);
    if(!p.first) cout << "NO SOLUTION";
    else {
        cout << p.first << "\n" << p.second << "\n";
    }
}