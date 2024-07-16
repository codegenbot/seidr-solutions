#include <vector>
#include <unordered_map>

using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    nums.resize(n);
    
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> nums[i];
    }
    
    int target;
    cout << "Enter the target sum: ";
    cin >> target;
    
    vector<int> result = findPair(nums, target);
    if (!result.empty()) {
        cout << "The pair of elements that sum to the target is: (" << result[0] << ", " << result[1] << ")" << endl;
    } else {
        cout << "No such pair found." << endl;
    }
    
    return 0;
}