#include <vector>
#include <string>
#include <iostream>
#include <cmath>

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
    vector<int> nums;
    int n, num;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    cout << specialFilter(nums) << endl;
    return 0;
}