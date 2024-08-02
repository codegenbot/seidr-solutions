#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> numIndex;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            result.push_back(complement);
            result.push_back(nums[i]);
            break;
        }
        numIndex[nums[i]] = i;
    }

    return result;
}

int main() {
    int n, a, b;
    vector<int> nums;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        nums.push_back(a);
    }
    cin >> a;

    vector<int> result = findPair(nums, a);

    cout << result[0] << endl;
    cout << result[1] << endl;

    return 0;
}