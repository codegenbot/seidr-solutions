```
#include <vector>
#include <climits>
using namespace std;

void cutVector(vector<int>& nums) {
    int n = nums.size();
    
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[0]) {
            vector<int> left(nums.begin(), nums.begin() + i);
            vector<int> right(nums.begin() + i, nums.end());
            cout << "Left: ";
            for (int num : left) {
                cout << num << " ";
            }
            cout << endl;
            cout << "Right: ";
            for (int num : right) {
                cout << num << " ";
            }
            cout << endl;
            return;
        }
    }

    int min_diff = INT_MAX, min_left = 0, min_right = 0;
    for (int i = 1; i < n; i++) {
        int diff = abs(nums[i] - nums[0]) + abs(nums[n-1] - nums[i-1]);
        if (diff < min_diff) {
            min_diff = diff;
            min_left = nums.begin() + i;
            min_right = nums.end();
        }
    }

    vector<int> left(nums.begin(), min_left);
    vector<int> right(min_right, nums.end());
    cout << "Left: ";
    for (int num : left) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (int num : right) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    cutVector({1, 2, 3, 4});
    return 0;
}