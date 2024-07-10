#include <vector>
using namespace std;

int fuelCost(vector<int> &nums) {
    int sum = 0;
    for (int num : nums) {
        sum += ((num / 3) - 2);
    }
    return sum;
}

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << fuelCost(nums) << endl;
    return 0;
}