#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num <= 10 && num >= -10) continue;
        int absNum = abs(num);
        string strNum = to_string(absNum);
        char firstDigit = strNum[0];
        char lastDigit = strNum[strNum.size() - 1];
        if ((firstDigit == '1' || firstDigit == '3' || firstDigit == '5' || firstDigit == '7' || firstDigit == '9') &&
            (lastDigit == '1' || lastDigit == '3' || lastDigit == '5' || lastDigit == '7' || lastDigit == '9')) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        nums.push_back(x);
    }
    cout << specialFilter(nums) << endl;
    return 0;
}