#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxLeader = nums[n - 1];
    leaders.push_back(maxLeader);
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxLeader) {
            maxLeader = nums[i];
            leaders.push_back(maxLeader);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> nums = {920, 315, 545, 835, 455, 126, 67, 736, 825, 73, 943, 469, 679, 3, 347};
    vector<int> leaders = findLeaders(nums);
    for (int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}