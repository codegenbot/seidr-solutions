#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = (num / 3 - 2);
        sum += newNum;
    }
    return sum;
}

int main() {
    vector<int> nums = {1, 2, 3};
    int result = fuelCost(nums);
    cout << "Fuel cost: " << result << endl;
    return 0;
}