#include <vector>
using namespace std;

pair<int,int> findPair(vector<int>& nums, int target) {
    unordered_map<int,int> numMap;
    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if(numMap.find(complement) != numMap.end()) {
            return pair<int,int>(nums[i],complement);
        }
        numMap[nums[i]] = i;
    }
    return pair<int,int>(-1,-1); // or throw an exception
}

int main() {
    int n, a, b; 
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        vector<int> nums = {a,b};
        pair<int,int> result = findPair(nums, a + b);
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}