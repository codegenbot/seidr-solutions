#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders() {
    vector<int> nums;
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    vector<int> leaders;
    int max_right = nums[nums.size() - 1];
    
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= max_right) {
            leaders.push_back(nums[i]);
            max_right = nums[i];
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