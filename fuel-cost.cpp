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
    cout << "Enter numbers (enter 'q' to finish): ";
    string input;
    while (true) {
        cin >> input;
        if (input == "q") break;
        int num = stoi(input);
        nums.push_back(num);
    }
    cout << "Fuel cost: " << fuelCost(nums) << endl;
    return 0;
}