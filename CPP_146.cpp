#include <iostream>
#include <vector>
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            int firstDigit = abs(num) / 10; // Get the first digit
            int lastDigit = abs(num) % 10; // Get the last digit
            if (firstDigit % 2 != 0 && lastDigit % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> nums1 = {15, -73, 14, -15};
    vector<int> nums2 = {33, -2, -3, 45, 21, 109};

    cout << specialFilter(nums1) << endl; // Output: 1
    cout << specialFilter(nums2) << endl; // Output: 2

    return 0;
}