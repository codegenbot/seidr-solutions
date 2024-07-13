#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders() {
    vector<int> nums;
    
    for (int i = 0; i < 17; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    vector<int> leaders;
    int max_leader = nums[nums.size() - 1];
    
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= max_leader) {
            leaders.push_back(nums[i]);
            max_leader = nums[i];
        }
    }

    reverse(leaders.begin(), leaders.end());

    return leaders;
}

int main() {
    vector<int> result = findLeaders();
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}