#include <vector>
using namespace std;

int findFirstNegativeIndex(vector<int>& nums) {
    int sum = 0;
    int index = -1;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            index = i;
            break;
        }
    }
    return index;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << findFirstNegativeIndex(nums) << endl;
    return 0;
}