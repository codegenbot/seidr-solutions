#include <vector>
using namespace std;

int fuelCost(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = (num / 3);
        if (newNum < 1) {
            newNum = 0;
        } else {
            newNum--;
        }
        sum += newNum;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << fuelCost(nums) << endl;
    return 0;
}