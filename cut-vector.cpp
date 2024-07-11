#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int min_diff = INT_MAX;
    int min_idx = -1;
    for(int i=0; i<n-1; i++){
        int diff = abs(nums[i+1] - nums[i]);
        if(diff == 0 && (min_diff > 0 || min_idx == -1)) min_diff = 0, min_idx = i;
        else if(diff < min_diff) min_diff = diff, min_idx = i;
    }
    if(min_idx == -1) {
        return {{}, {}};
    } else {
        vector<int> left(min_idx+1), right(n-min_idx-1);
        for(int i=0; i<=min_idx; i++) left.push_back(nums[i]);
        for(int i=min_idx+1; i<n; i++) right.push_back(nums[i]);
        return {{left}, {right}};
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<vector<int>> result = cutVector(nums);
    for(int i=0; i<result.size(); i++) {
        cout << "Subvector " << (i+1) << ": ";
        for(int j=0; j<result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}