#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxLeader = nums[0];
    leaders.push_back(maxLeader);
    for (int i = 1; i < n; i++) {
        if (nums[i] >= maxLeader) {
            maxLeader = nums[i];
            leaders.push_back(maxLeader);
        }
    }
    return leaders;
}

int main() {
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> leaders = findLeaders(nums);
    for (int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}