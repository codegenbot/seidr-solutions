```cpp
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> res(2);
    
    for(int i = 0; i < n - 1; i++) {
        if(abs(nums[i] - nums[i + 1]) > abs(nums[0] - nums[n - 1])) {
            break;
        }
    }
    
    int j = 0;
    while(j < n - 1 && nums[j] == nums[0]) {
        j++;
    }
    
    for(int i = j; i >= 0; i--) {
        if(i == 0 || abs(nums[i] - nums[i - 1]) > abs(nums[n - 1] - nums[0])) {
            res[0].push_back(nums[i]);
            break;
        }
    }
    
    for(int i = j + 1; i < n; i++) {
        if(i == n - 1 || abs(nums[i] - nums[i + 1]) > abs(nums[n - 1] - nums[0])) {
            res[1].push_back(nums[i]);
            break;
        }
    }
    
    return res;
}

int main() {
    vector<int> input = {1, 2, 2, 3, 4, 5};
    vector<vector<int>> output = cutVector(input);
    for(int i = 0; i < 2; i++) {
        cout << "[";
        for(int j = 0; j < output[i].size(); j++) {
            if(j != output[i].size() - 1) 
                cout << output[i][j] << ", ";
            else
                cout << output[i][j];
        }
        cout << "]" << endl;
    }
    return 0;
}