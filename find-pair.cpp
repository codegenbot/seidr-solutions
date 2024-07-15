#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> sortedNums = nums; 
    sort(sortedNums.begin(), sortedNums.end()); 

    for (int i = 0; i < sortedNums.size(); i++) {
        int complement = target - sortedNums[i];
        if (find(sortedNums.begin(), sortedNums.end(), complement) != sortedNums.end()) {
            return {complement, sortedNums[i]};
        }
    }
    return {};
}

int main() {
    vector<int> nums = {-8939, 3597, -4909};
    int target = 2704;
    auto pair = findPair(nums, target);
    if (!pair.empty()) {
        cout << "The pair is: " << pair[0] << ", " << pair[1] << endl;
    } else {
        cout << "No such pair found." << endl;
    }
}