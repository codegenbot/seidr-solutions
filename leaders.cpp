#include <iostream>
#include <vector>
using namespace std;
/*
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0
output:
0
*/
vector<int> leaders(vector<int> nums) {
    vector<int> leaders;
    int max = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] > max) {
            max = nums[i];
            leaders.push_back(max);
        }
    }
    return leaders;
}
int main() {
    vector<int> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    vector<int> leaders = leaders(input);
    cout << "Leaders: ";
    for (auto it : leaders) {
        cout << it << " ";
    }
    return 0;
}