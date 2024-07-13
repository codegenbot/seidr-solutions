#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findLeaders() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> leaders;
    int max_leader = nums[n - 1];
    leaders.push_back(max_leader);
    
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= max_leader) {
            leaders.push_back(nums[i]);
            max_leader = nums[i];
        }
    }

    return vector<int>(leaders.rbegin(), leaders.rend());
}

int main() {
    vector<int> result = findLeaders();
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}