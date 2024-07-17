#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int leftSum = 0;
    for(int i=0; i<nums.size(); i++) {
        leftSum += nums[i];
    }

    int minDiff = INT_MAX;
    int cutIndex = -1;
    int rightSum = 0;
    for(int i=0; i<nums.size(); i++) {
        rightSum += nums[i];
        if(i == nums.size()-1) continue;

        int left = leftSum;
        int right = rightSum;

        while(left != right && i < nums.size()-1) {
            right -= nums[i+1];
            i++;
        }

        if(abs(left - right) < minDiff) {
            minDiff = abs(left-right);
            cutIndex = i-1;
        }
    }

    vector<int> leftVec(nums.begin(), nums.begin()+cutIndex+1);
    vector<int> rightVec(nums.begin()+cutIndex+1, nums.end());
    return {leftVec, rightVec};
}

int main() {
    // Read input from user
    int num;
    cin >> num;

    vector<int> nums;
    for(int i=0; i<num; i++) {
        int n;
        cin >> n;
        nums.push_back(n);
    }

    vector<int> result = cutVector(nums);

    cout << "{";
    for(int i=0; i<result[0].size(); i++) {
        if(i > 0) cout << ", ";
        cout << result[0][i];
    }
    cout << "}" << endl;

    cout << "{";
    for(int i=0; i<result[1].size(); i++) {
        if(i > 0) cout << ", ";
        cout << result[1][i];
    }
    cout << "}" << endl;
}