#include <vector>
#include <string>
#include <cmath>
#include <iostream>

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
    vector<int> testVec = {-123, 11, 20, -35, 45, 37, 7, 8, 13, 14, -97};
    cout << specialFilter(testVec) << endl;
    return 0;
}