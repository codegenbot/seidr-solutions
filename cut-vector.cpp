#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int pos = -1;
    
    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++)
            leftSum += nums[j];
        for (int j = i + 1; j < n; j++)
            rightSum += nums[j];
        
        if (leftSum == rightSum) {
            return {{nums[0], nums[0]}, nums};
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    return {{}, nums};
}

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    vector<vector<int>> result = cutVector(nums);

    cout << "[";
    for (int num : result[0]) {
        cout << num << " ";
    }
    cout << "]" << endl;

    cout << "[";
    for (int i = 1; i < result[0].size(); i++) {
        cout << result[0][i] << " ";
    }
    cout << "]" << endl;

    return 0;
}