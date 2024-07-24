#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int,int> numMap;

    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if(numMap.find(complement) != numMap.end()) {
            result.push_back(nums[i]);
            result.push_back(complement);
            return result;
        }
        numMap[nums[i]] = i;
    }

    return result;
}

int main() {
    int n, x, y, z;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> z;
    vector<int> result = findPair(nums, z);
    cout << result[0] << endl;
    cout << result[1] << endl;
    return 0;
}