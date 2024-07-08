#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            bool negativeFound = false;
            while (num > 0 || (negativeFound && num < 0)) {
                int digit = abs(num) % 10;
                if ((digit > 1) || (digit == 1 && !negativeFound))
                    sum += digit;
                else
                    negativeFound = true;
                num /= 10;
            }
        } else {
            int sum = 0;
            bool negativeFound = false;
            while (num < 0 || (negativeFound && num >= 0)) {
                int digit = abs(num) % 10 * (-1);
                if ((digit > -1) || (digit == -1 && !negativeFound))
                    sum += digit;
                else
                    negativeFound = true;
                num /= 10;
            }
        }
        if (sum > 0)
            count++;
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    // your code here
}