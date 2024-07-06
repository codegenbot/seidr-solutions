#include <vector>
using namespace std;

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int abs_num = num;
            while (abs_num > 0) {
                int digit = abs_num % 10;
                sum += digit;
                abs_num /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, i = 1;
            do {
                int digit = num / i % 10;
                sum += (digit < 0) ? -digit : digit;
                i *= 10;
            } while (i <= abs(num));
            if (sum > 0)
                count++;
        }
    }
    return count;