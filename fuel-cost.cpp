#include <vector>
using namespace std;

int calculateFuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        if (result > 0)
            sum += max(0, result - 2);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    cout << calculateFuelCost(nums) << endl;

    return 0;
}