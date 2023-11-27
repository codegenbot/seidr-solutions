#include <vector>
#include <iostream>
using namespace std;

vector<int> getLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxNum = nums[n-1];
    leaders.push_back(maxNum);
    for(int i = n-2; i >= 0; i--) {
        if(nums[i] >= maxNum) {
            maxNum = nums[i];
            leaders.push_back(maxNum);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> result = getLeaders(nums);
    cout << result.size() << endl;
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}