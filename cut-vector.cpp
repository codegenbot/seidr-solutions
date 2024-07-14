#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    int min_diff = INT_MAX;
    int index = -1;
    
    for (int i = 0; i < nums.size() - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        
        if (diff <= min_diff) {
            min_diff = diff;
            index = i;
        }
    }

    return {{nums.begin(), nums.begin() + index + 1}, {nums.begin() + index + 1, nums.end()}};
}

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    vector<vector<int>> result = cutVector(nums);
    
    cout << "[";
    for (int i = 0; i < result[0].size(); i++) {
        cout << result[0][i];
        if (i != result[0].size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    
    cout << "[";
    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i];
        if (i != result[1].size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}