#include <vector>
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

vector<int> findPair(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

int main() {
    vector<int> nums = { 5, 7 };
    int target = 12;
    auto result = findPair(nums, target);
    if (result.empty()) {
        cout << "No pair found." << endl;
    } else {
        cout << "The two elements that sum to the target are: ";
        for (int i : result) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    return 0;
}