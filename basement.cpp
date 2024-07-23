#include <vector>
#include<iostream>
using namespace std;

int basement(vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return nums.size();
}

int main() {
    vector<int> nums;
    int num;
    while(cin >> num) {
        nums.push_back(num);
    }
    cout << basement(nums) << endl;
    return 0;
}