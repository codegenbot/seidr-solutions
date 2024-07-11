#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = INT_MIN;

    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] <= maxRight) {
            maxRight = nums[i];
            leaders.push_back(nums[i]);
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> nums;
    int num;
    
    cout << "Enter positive integers (0 to end input):" << endl;
    cout.flush();
    while (cin >> num && num != 0) {
        nums.push_back(num);
    }
    
    vector<int> result = findLeaders(nums);
    
    cout << "Leaders in the vector are:";
    for (int leader : result) {
        cout << " " << leader;
    }
    cout << endl;
    
    return 0;
}