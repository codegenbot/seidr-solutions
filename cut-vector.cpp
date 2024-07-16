#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    vector<vector<int>> result;
    
    for (int i = 0; i < n; i++) {
        vector<int> left, right;
        for (int j = 0; j <= i; j++) {
            left.push_back(nums[j]);
        }
        for (int k = i + 1; k < n; k++) {
            right.push_back(nums[k]);
        }
        int left_sum = 0, right_sum = 0;
        for (int x : left) {
            left_sum += x;
        }
        for (int y : right) {
            right_sum += y;
        }
        
        if (left_sum == right_sum || abs(left_sum - right_sum) < abs(left_sum - left_sum)) {
            result.push_back(left);
            result.push_back(right);
            return result;
        }
    }
    
    return {{}, {}};
}

int main() {
    int num_cases;
    cin >> num_cases;
    
    for (int i = 0; i < num_cases; i++) {
        int n;
        cin >> n;
        
        vector<int> nums(n);
        for (int j = 0; j < n; j++) {
            cin >> nums[j];
        }
        
        vector<vector<int>> result = cutVector(nums);
        for (auto &v : result) {
            for (int x : v) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}