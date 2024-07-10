#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int num : nums) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            return {complement, num};
        }
        numMap[num] = 1;
    }
    return {-1, -1}; // return empty pair
}

int main() {
    int n;
    cin >> n;
    
    for(int i=0; i<n; ++i){
        int a, b;
        cin >> a >> b;
        vector<int> nums = {a,b};
        
        if(findPair(nums,a+b).first != -1)
            cout << findPair(nums,a+b).first << " " << findPair(nums,a+b).second << endl;
        else
            cout << "No solution exists." << endl;
    }
    
    return 0;
}