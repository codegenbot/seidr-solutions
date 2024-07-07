#include <vector>
#include <iostream>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int newNum = floor((double)num / 3) - 2;
        sum += newNum;
    }
    return sum;
}

int main() {
    vector<int> nums;
    cout << "Enter the numbers separated by space: ";
    string str;
    getline(cin, str);
    for (auto x : str) {
        if (x == ' ') continue;
        int num = 0;
        while (x != ' ') {
            num = num * 10 + (x - '0');
            x = getchar();
        }
        nums.push_back(num);
    }
    cout << "The fuel cost is: " << fuelCost(nums) << endl;
    return 0;
}