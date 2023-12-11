#include <vector>
#include <iostream>
using namespace std;

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
    vector<int> nums;
    cout << "Leaders in empty vector: ";
    for (auto leader : leaders(nums)) {
        cout << leader << " ";
    }
    cout << endl;

    nums = {1};
    cout << "Leaders in non-empty vector with only one element: ";
    for (auto leader : leaders(nums)) {
        cout << leader << " ";
    }
    cout << endl;

    nums = {1, 2, 3, 4};
    cout << "Leaders in non-empty vector with multiple elements: ";
    for (auto leader : leaders(nums)) {
        cout << leader << " ";
    }
    cout << endl;
}