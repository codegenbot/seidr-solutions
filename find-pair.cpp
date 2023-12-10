#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    set<int> uniqueElements;
    for (int i = 0; i < nums.size(); i++) {
        if (uniqueElements.find(nums[i]) == uniqueElements.end()) {
            uniqueElements.insert(nums[i]);
        }
    }

    vector<int> result;
    for (auto it = uniqueElements.begin(); it != uniqueElements.end(); ++it) {
        int element = *it;
        if (element + target == 0) {
            result.push_back(element);
            break;
        }
    }

    return result;
}

int main() {
    vector<int> nums = { 5, 7 };
    int target = 12;
    vector<int> result = findPair(nums, target);
    cout << "The two elements that sum to the target are: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}