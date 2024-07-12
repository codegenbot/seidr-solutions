#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    
    for (int i = 0; i < nums.size(); i++) {
        if (*max_element(nums.begin() + i, nums.end()) == nums[i]) {
            leaders.push_back(nums[i]);
        }
    }

    return leaders;
}

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
        if (cin.peek() == '\n') {
            break;
        }
    }

    vector<int> result = findLeaders(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}