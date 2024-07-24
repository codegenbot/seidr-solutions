#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = (num / 3);
        result = floor(result); // round down to nearest integer
        result -= 2; 
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> nums;
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> nums.push_back(i);
    }
    cout << "The sum is: " << fuelCost(nums) << endl;
    return 0;
}