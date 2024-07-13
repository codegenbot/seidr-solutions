#include <iostream>
#include <vector>
using namespace std;

int calculateFuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        sum += (num + 2) / 3 - 2;
    }
    return sum;
}

int main() {
    vector<int> nums = {11, 5140, 6810, 5151, 4849, 1071, 5030, 1597, 3475, 6951, 3373, 6095};
    int totalCost = calculateFuelCost(nums);
    cout << totalCost << endl;
    return 0;
}