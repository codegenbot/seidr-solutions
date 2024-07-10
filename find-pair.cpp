#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> result = {-1, -1};

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num1, num2;
        cin >> num1;
        cin >> num2;
        cout << findPair({num1, num2}, num1 + num2).at(0) << " " << findPair({num1, num2}, num1 + num2).at(1) << endl;
    }

    return 0;
}