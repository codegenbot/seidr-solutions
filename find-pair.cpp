#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return make_pair(nums[i], complement);
        }
        numMap[nums[i]] = i;
    }
    return {-1, -1};
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(numbers, target);
    if (result.first != -1) {
        cout << result.first << " ";
        cout << result.second << endl;
    } else {
        cout << "No such pair found" << endl;
    }
    return 0;
}