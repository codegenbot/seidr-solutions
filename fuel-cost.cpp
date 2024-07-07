```
#include <vector>
#include <iostream>
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
    vector<int> nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        cout << "Enter element " << (i+1) << ": ";
        cin >> nums.push_back();
    }
    cout << "The total fuel cost is: " << fuelCost(nums);
    return 0;
}