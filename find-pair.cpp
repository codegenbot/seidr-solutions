#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                result.push_back(nums[i]);
                result.push_back(nums[j]);
                return result;
            }
        }
    }
    result.push_back(-1);
    return result;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        cin >> x;
        nums.push_back(x);
    }
    int target;
    cin >> target;
    vector<int> result = findPair(nums, target);
    if (result[0] == -1) {
        cout << "No pair found" << endl;
    } else {
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << endl;
        }
    }
    return 0;
}