#include <vector>
using namespace std;

vector<int> cutVector(vector<int> nums) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[0]);
        
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + cut_index);
    vector<int> right(nums.begin() + cut_index, nums.end());
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n+1);
    for(int i = 0; i <= n; i++) {
        cin >> nums[i];
    }
    auto result = cutVector(nums);
    cout << "Output: ";
    for (auto num : result[0]) {
        cout << num << " ";
    }
    cout << endl;
    for (auto num : result[1]) {
        cout << num << " ";
    }
    return 0;
}