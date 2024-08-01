#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if (numIndex.count(complement)) {
            return {complement, nums[i]};
        }
        
        numIndex[nums[i]] = i;
    }
    
    return {-1, -1};
}

int main() {
    int n, x, y, z;
    cin >> n;
    
    vector<int> arr;
    
    for(int i=0; i<n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    
    cin >> x;
    
    pair<int,int> result = findPair(arr, x);
    
    cout << result.first << endl;
    cout << result.second << endl;
    
    return 0;
}