#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int> nums) {
    vector<int> result;
    int n = nums.size();
    int maxLeader = nums[n-1];
    result.push_back(maxLeader);
    for(int i = n-2; i >= 0; i--) {
        if(nums[i] >= maxLeader) {
            maxLeader = nums[i];
            result.push_back(maxLeader);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> result = leaders(nums);
    cout << result.size() << endl;
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}