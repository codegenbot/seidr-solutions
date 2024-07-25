#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        int comp = target - nums[i];
        
        if (numMap.find(comp) != numMap.end()) {
            return {comp, nums[i]};
        }
        
        numMap[nums[i]] = i;
    }
    
    return {-1, -1};
}

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        vector<int> nums(a);
        for(auto &j:nums) 
            cin >> j;
        int target;
        cin >> target;

        pair<int, int> p = findPair(nums, target);
        if(p.first == -1 && p.second == -1)
            cout << "Pair not found" << endl;
        else
            cout << p.first << " " << p.second << endl;
    }

    return 0;
}