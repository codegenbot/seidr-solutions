#include <vector>
#include <cassert>

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int n = num;
            while (n > 0) {
                int digit = n % 10;
                sum += digit;
                n /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0, i = 1;
            int n = abs(num);
            while (n > 0) {
                int digit = n % 10;
                if (digit != 0 || i == 1) {
                    sum += (digit < 0 ? -1 : 1);
                }
                n /= 10;
                i++;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;

int main() {
    assert(count_nums({1}) == 1);
    return 0;
}