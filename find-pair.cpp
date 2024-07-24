#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    vector<int> result;

    for (int num : nums) {
        int complement = target - num;
        if (map.find(complement) != map.end()) {
            result.push_back(num);
            result.push_back(complement);
            break;
        }
        map[num] = 1;
    }

    return result;
}

int main() {
    int n, a, b;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        nums.push_back(a);
    }
    cin >> a;
    nums.push_back(a);

    vector<int> result = findPair(nums, a - nums[0] - nums[1]);

    if(result.size() > 0){
        cout << result[0] << "\n" << result[1];
    } else {
        cout << "No such pair found.\n";
    }

    return 0;
}