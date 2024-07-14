#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < nums.size(); ++i) {
        int diff = abs(nums[i] - nums[0]);
        
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    return {{nums.begin(), nums.begin() + cut_index}, {nums.begin() + cut_index, nums.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(nums);
    
    cout << "[" << to_string(result.first[0]);
    for (int i = 1; i < result.first.size(); ++i) {
        cout << "," << result.first[i];
    }
    cout << "]\n";
    cout << "[" << to_string(result.second[0]);
    for (int i = 1; i < result.second.size(); ++i) {
        cout << "," << result.second[i];
    }
    cout << ", 0]" << endl;
    
    return 0;
}