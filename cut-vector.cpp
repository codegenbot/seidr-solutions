```cpp
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> res(2);

    for(int i = 0; i < n; i++) {
        if(i == n - 1 || nums[i] != nums[i + 1]) {
            res[0].push_back(nums[i]);
            break;
        }
    }

    int j = n - 1;
    while(j > 0 && nums[j] == nums.back()) {
        j--;
    }

    for(int i = j; i >= 0; i--) {
        if(i == 0 || nums[i] != nums[i - 1]) {
            res[1].push_back(nums[i]);
            break;
        }
    }

    return res;
}

int main() {
    vector<vector<int>> result = cutVector({5, 3, 3, 4, 5, 5});
    cout << "Result: ";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}