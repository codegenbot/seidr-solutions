#include <cassert>

int sign = 1;
int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        bool negativeFound = false;
        int sum = 0;
        if(num >= 0)
            sign = 1;
        else
            sign = -1, negativeFound = true;

        while(abs(num) > 0 || (negativeFound && abs(num) < 0)) {
            int digit = abs(num) % 10 * sign;
            if((digit > 0 && !negativeFound) || (digit == 1 && negativeFound))
                sum += digit;
            else
                negativeFound = true;
            num /= 10;
        }
        if(sum > 0)
            count++;
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
}