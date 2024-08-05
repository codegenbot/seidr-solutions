#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int maxLeader = nums.back();
    leaders.push_back(maxLeader);
    
    for (int i = nums.size() - 2; i >= 0 ; i--) {
        if (nums[i] >= maxLeader) {
            maxLeader = nums[i];
            leaders.push_back(maxLeader);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> input = {16, 17, 4, 3, 5, 2};
    vector<int> result = findLeaders(input);
    
    for (int leader : result) {
        cout << leader << " ";
    }
    
    return 0;
}