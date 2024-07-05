#include <vector>
#include <string>
#include <iostream>
#include <cmath>    // For abs
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string str = to_string(abs(num));
            int firstDigit = str[0] - '0';
            int lastDigit = str[str.size() - 1] - '0';
            if ((firstDigit % 2 != 0) && (lastDigit % 2 != 0)) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> nums = {23, 12, 35, 47, 56};
    cout << specialFilter(nums) << endl;
    return 0;
}