#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = (num / 3);
        if (newNum < 1) newNum = 0; // round down to nearest integer
        else newNum -= 2; // subtract 2
        sum += newNum;
    }
    return sum;
}

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cout << fuelCost(nums) << endl;
    return 0;
}