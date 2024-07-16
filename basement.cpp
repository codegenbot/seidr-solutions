#include <vector>
#include <iostream>
using namespace std;

int basement(vector<int> &nums) {
    int cumsum = 0;
    for (int i = 0; i < nums.size(); i++) {
        cumsum += nums[i];
        if (cumsum < 0) return i+1; 
    }
    return -1; 
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << basement(nums) << endl;
    return 0;
}