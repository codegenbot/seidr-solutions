#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            result.push_back(nums[i]);
            result.push_back(complement);
            break;
        }
        map[nums[i]] = i;
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

    vector<int> res = findPair(nums, target);

    if(res.size() == 2) {
        cout << res[0] << '\n' << res[1] << '\n';
    }
    
    return 0;
}