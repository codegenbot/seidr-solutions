#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, vec[i]};
        }
        numMap[vec[i]] = i;
    }
    
    return {-1, -1}; // Return this pair if no such pair is found
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
    
    pair<int, int> result = findPair(nums, target);
    
    cout << result.first << " " << result.second << endl;
    
    return 0;
}