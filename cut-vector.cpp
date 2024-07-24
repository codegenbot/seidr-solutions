#include <vector>
#include <climits>
using namespace std;

void cutVector(vector<int>& nums) {
    int n = nums.size();
    
    int min_diff = INT_MAX;
    for (int i = 1; i < n; i++) {
        int diff1 = abs(nums[i] - nums[0]);
        int diff2 = abs(nums[n-1] - nums[i-1]);
        if (diff1 <= diff2) {
            cout << "[";
            for (int j = 0; j < i; j++) {
                cout << nums[j] << " ";
            }
            cout << "] [";

            for (int k = i; k < n; k++) {
                cout << nums[k] << " ";
            }
            cout << "]" << endl;
            return;
        } else {
            if (abs(diff1-diff2) < abs(min_diff)) {
                min_diff = diff1 - diff2;
            }
        }
    }

    cout << "[";
    for (int j = 0; j < n; j++) {
        cout << nums[j] << " ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> nums = {3,1,5,6,7};
    cutVector(nums);
    return 0;
}