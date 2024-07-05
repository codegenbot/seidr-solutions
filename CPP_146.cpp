#include<vector>
#include<string>
using namespace std;

bool isOdd(int n) {
    return n % 2 != 0;
}

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num <= 10 && num >= -10) continue;
        num = abs(num);
        string strNum = to_string(num);
        if (isOdd(strNum.front() - '0') && isOdd(strNum.back() - '0')) {
            count++;
        }
    }
    return count;
}