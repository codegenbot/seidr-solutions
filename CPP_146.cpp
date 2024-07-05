#include<vector>
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num <= 10 && num >= -10) continue;
        int absNum = abs(num);
        int firstDigit = absNum;
        while (firstDigit >= 10) firstDigit /= 10;
        int lastDigit = absNum % 10;
        if ((firstDigit % 2 != 0) && (lastDigit % 2 != 0)) {
            count++;
        }
    }
    return count;
}