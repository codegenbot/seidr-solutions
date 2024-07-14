#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int index = 0;
    
    for(int i=1; i<nums.size(); i++) {
        if(abs(nums[i-1]-nums[i]) < minDiff) {
            minDiff = abs(nums[i-1]-nums[i]);
            index = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(index+1);
    for(int i=0; i<=index; i++) {
        result[0].push_back(nums[i]);
    }
    
    result[1].resize(nums.size()-index-1);
    for(int i=index+1; i<nums.size(); i++) {
        result[1].push_back(nums[i]);
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &num : nums) {
        cin >> num;
    }

    vector<vector<int>> result = cutVector(nums);

    cout << "[";
    for(int i=0; i<result[0].size(); i++) {
        if(i > 0)
            cout << ", ";
        cout << result[0][i];
    }
    cout << "]\n";

    cout << "[";
    for(int i=0; i<result[1].size(); i++) {
        if(i > 0)
            cout << ", ";
        cout << result[1][i];
    }
    cout << "]\n";

    return 0;
}