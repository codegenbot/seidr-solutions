#include <iostream>
#include <vector>

using namespace std;

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            bool hasNegative = false;
            while (num > 0 || hasNegative) {
                int digit = num % 10;
                if (digit < 0) {
                    hasNegative = true;
                    digit = -digit;
                }
                sum += digit;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    return 0;
}