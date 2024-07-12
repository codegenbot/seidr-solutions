#include <iostream>
#include <vector>
using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (i == nums.size() - 1 || nums[i] >= nums[i + 1]) {
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
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i] << " ";
    }

    return 0;
}