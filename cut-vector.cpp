```
#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int pos = -1;
    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    return {vector<int>(nums.begin(), pos+1), vector<int>(nums.begin() + pos, nums.end())};
}

int main() {
    int n;
    cin >> n;
    if(n < 1){
        cout << "Invalid input. Please enter a positive integer." << endl;
        return -1;
    }
    vector<int> nums(n);
    for (auto &num : nums) {
        cin >> num;
        if(num < 1){
            cout << "Invalid input. Please enter positive integers only." << endl;
            return -1;
        }
    }
    vector<int> result = cutVector(nums);
    cout << "[";
    for (auto it = result.at(0).begin(); it != result.at(0).end(); ++it) {
        cout << *it << " ";
    }
    cout << "] [";
    for (auto it = result.at(1).begin(); it != result.at(1).end(); ++it) {
        cout << *it << " ";
    }
    cout << "] ]" << endl;
    return 0;
}