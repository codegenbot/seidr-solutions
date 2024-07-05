#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num <= 10) continue;
        num = abs(num);
        string str = to_string(num);
        if ((str[0] - '0') % 2 != 0 && (str.back() - '0') % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums = { -23, 8, 15, 42, 107 };
    cout << specialFilter(nums) << endl;
    return 0;
}