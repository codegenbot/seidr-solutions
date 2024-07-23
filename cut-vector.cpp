#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int leftSum = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
        leftSum += nums[i];
    }
    vector<int> res = {{}, {}};
    
    for (int i = 0, j = 0; j < nums.size(); ) {
        if (leftSum == nums[j]) {
            res[0].push_back(nums[i]);
            res[1].push_back(nums[j]);
            leftSum = 0;
            i++;
            j++;
        } else if (leftSum > nums[j] - leftSum) {
            res[0].push_back(nums[i]);
            leftSum -= nums[i];
            i++;
        } else {
            res[1].push_back(nums[j]);
            leftSum += nums[j];
            j++;
        }
    }
    
    res[0].push_back(nums.back());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &num : nums) cin >> num;
    
    vector<int> res = cutVector(nums);
    cout << "1 ";
    for (const auto &num : res[0]) {
        cout << num << " ";
    }
    cout << endl;
    cout << "0 " << 0 << endl;
    
    return 0;
}