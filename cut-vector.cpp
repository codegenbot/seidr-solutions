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
    
    int j = 0;
    while(j < n && nums[j] == nums[0]) {
        j++;
    }
    
    for(int i = j; i < n; i++) {
        if(i == n - 1 || nums[i] != nums[i + 1]) {
            res[1].push_back(nums[i]);
        }
    }
    
    return res;
}

int main() {
    vector<int> input = {1, 2, 2, 3, 4, 5};
    vector<vector<int>> output = cutVector(input);
    
    // You can add any further processing on your output here...
    for(int i = 0; i < 2; i++) {
        cout << "Output " << i + 1 << ": ";
        for(auto num : output[i]) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}