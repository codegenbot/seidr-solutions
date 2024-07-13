#include <vector>
using namespace std;

int calculateFuelCost(vector<int> &nums) {
    int sum = 0;
    for (int num : nums) {
        int val = (num / 3);
        val = floor(val) - 2;
        sum += val;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    cout << calculateFuelCost(nums) << endl;
    return 0;
}