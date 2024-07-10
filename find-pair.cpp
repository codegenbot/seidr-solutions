#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> pair;
    map<int, int> numMap;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            pair.push_back(complement);
            pair.push_back(nums[i]);
            break;
        }
        numMap[nums[i]] = i;
    }

    return pair;
}

int main() {
    int n, a, b;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        vector<int> result = findPair({a, b}, target);
        cout << result[0] << " " << result[1] << endl;
    }

    return 0;
}