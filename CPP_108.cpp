#include <cassert>
#include <vector>

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
            sum += digit;
            num /= 10;
        }
        
        if(sum == 1)
            count++;
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
}