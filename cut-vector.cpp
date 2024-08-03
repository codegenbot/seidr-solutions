#include <vector>
#include <iostream>

using namespace std;

void cutVector(const vector<int>& nums) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < nums.size(); ++i) {
        int diff = abs(nums[i] - nums[0]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + cut_index);
    vector<int> right(nums.begin() + cut_index, nums.end());
    
    cout << "Left: ";
    for (int num : left) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "Right: ";
    for (int num : right) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (auto& num : nums) {
        cin >> num;
    }
    
    cutVector(nums);
    
    return 0;
}