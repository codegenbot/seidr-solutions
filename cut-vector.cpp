#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res;
    
    for (int i = 1; i <= n/2; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; j++) {
            sum1 += nums[j];
        }
        for (int j = i; j < n; j++) {
            sum2 += nums[j];
        }
        
        if (sum1 == sum2) {
            res.push_back({nums.begin(), nums.begin() + i});
            res.push_back({nums.begin() + i, nums.end()});
            return res;
        } else {
            int diff = abs(sum1 - sum2);
            for (int j = 0; j < n/2; j++) {
                if (abs((sum1 - nums[j]) - sum2) <= diff) {
                    res.push_back({nums.begin(), nums.begin() + j});
                    res.push_back({nums.begin() + j, nums.end()});
                    return res;
                }
            }
        }
    }
    
    res.push_back({nums.begin(), nums.end()});
    res.push_back({});
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<vector<int>> res = cutVector(nums);
    
    cout << "[";
    for (int i = 0; i < res[0].size(); i++) {
        cout << res[0][i];
        if (i != res[0].size() - 1) {
            cout << ", ";
        }
    }
    cout << "], [";
    for (int i = 0; i < res[1].size(); i++) {
        cout << res[1][i];
        if (i != res[1].size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}