#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    return {{nums.begin(), nums.begin() + splitIndex}, {nums.begin() + splitIndex, nums.end()}};
}

int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }
    
    auto result = cutVector(input);
    
    for (auto &vec : result) {
        for (int i : vec) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;