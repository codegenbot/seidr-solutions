#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> result;
    
    for(int i = 0; i < nums.size(); i++){
        int complement = target - nums[i];
        if(numMap.find(complement) != numMap.end()){
            result.push_back(nums[i]);
            result.push_back(complement);
            break;
        }
        numMap[nums[i]] = i;
    }
    
    return result;
}

int main() {
    int n, t;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; ++i) {
        cin >> nums[i];
    }
    cin >> t;
    vector<int> res = findPair(nums, t);
    cout << res[0] << endl << res[1] << endl;
    return 0;
}