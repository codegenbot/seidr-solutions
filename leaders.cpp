#include <iostream>
#include <vector>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int maxLeader = nums.back();
    leaders.push_back(maxLeader);
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= maxLeader) {
            maxLeader = nums[i];
            leaders.push_back(maxLeader);
        }
    }
    return vector<int>(leaders.rbegin(), leaders.rend());
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