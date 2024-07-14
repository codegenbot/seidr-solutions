#include <vector>
using namespace std;

int fuelCost(vector<int> &nums) {
    int sum = 0;
    for (int num : nums) {
        num /= 3;
        num = floor(num);
        num -= 2;
        sum += num;
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