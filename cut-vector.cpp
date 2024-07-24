#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[0]);
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    return {vector<int>(nums.begin(), nums.begin() + splitIndex), vector<int>(nums.begin() + splitIndex, nums.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> result = cutVector(nums);
    
    cout << "1 ";
    for (int num : result[0]) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "0 ";
    for (int i = 0; i < nums.size() - result[0].size(); i++) {
        cout << "0 ";
    }
    cout << endl;
    
    return 0;
}