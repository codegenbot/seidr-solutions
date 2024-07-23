```cpp
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> res(2);
    
    for(int i = 0; i < n; i++) {
        if(i == n - 1 || nums[i] != nums[i + 1]) {
            res[0].push_back(nums[i]);
        }
    }
    
    int j = n - 1;
    while(j > 0 && nums[j] == nums.back()) {
        j--;
    }
    
    for(int i = j; i >= 0; i--) {
        if(i == 0 || nums[i] != nums[i - 1]) {
            res[1].push_back(nums[i]);
        }
    }
    
    return res;
}

int main() {
    vector<int> input = {1, 2, 2, 3, 4, 5};
    vector<vector<int>> output = cutVector(input);
    cout << "Input: ";
    for(int i : input) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Output: " << endl;
    for(auto v : output) {
        for(int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}