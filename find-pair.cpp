Here is the solution:

#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    map<int, int> numMap;
    
    for (int num : nums) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            result.push_back(num);
            result.push_back(complement);
            return result;
        }
        numMap[num] = 1;
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    vector<int> result = findPair(nums, target);
    cout << result[0] << endl;
    cout << result[1] << endl;
    return 0;
}