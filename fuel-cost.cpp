Here is the solution:

#include <vector>
using namespace std;

int fuelCost(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += (num / 3 - 2);
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