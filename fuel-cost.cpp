#include <vector>
using namespace std;

int fuelCost(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        result = result - 2;
        if(result<0)
            result=0;
        sum += result;
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