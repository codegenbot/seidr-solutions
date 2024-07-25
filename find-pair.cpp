#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {complement, nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    throw runtime_error("No pair found");
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (auto &num : numbers) {
        cin >> num;
    }
    int target;
    cin >> target;
    cout << '(' << findPair(numbers, target).first << ", " << findPair(numbers, target).second << ')' << endl;
    return 0;
}