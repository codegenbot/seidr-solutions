#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> left;
    vector<int> right;
    for(int i=0; i<n-1; i++){
        if(nums[i+1] - nums[i] <= 0){
            left.push_back(nums[i]);
            for(int j=i; j<n-1; j++){
                left.push_back(nums[j+1]);
                break;
            }
            break;
        } else {
            left.push_back(nums[i]);
        }
    }
    for(int i=left.size(); i<n; i++) right.push_back(nums[i]);
    
    return {{left}, {right}};
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