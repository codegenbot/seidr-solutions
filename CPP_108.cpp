#include <vector>
using namespace std;

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        int sum = 0;
        bool negative = false;
        if (num < 0) {
            negative = true;
            num = -num;
        }
        while (num > 0) {
            int digit = num % 10;
            if (negative && digit == 5 || digit != 0)
                sum += digit;
            else
                sum += digit;

            num /= 10;
        }
        if (sum > 0)
            count++;
    }
    return count;
}