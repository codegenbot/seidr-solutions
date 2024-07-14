#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> result;

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
    vector<int> numbers(n);
    for(int i=0; i<n; i++) {
        cin >> numbers[i];
    }
    int target;
    cin >> target;

    vector<int> pair = findPair(numbers, target);

    cout << pair[0] << endl;
    cout << pair[1] << endl;

    return 0;
}