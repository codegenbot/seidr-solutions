```cpp
#include <vector>
#include <iostream>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = static_cast<int>(floor(double(num) / 3)) - 2;
        sum += newNum;
    }
    return sum;
}

int main() {
    vector<int> nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> nums.push_back(i);
    }
    cout << "The fuel cost is: " << fuelCost(nums) << endl;
    return 0;
}