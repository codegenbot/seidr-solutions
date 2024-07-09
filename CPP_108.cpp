#include <iostream>
#include <vector>

using namespace std;

int count_nums(vector<int> nums) {
    int sign = 1;
    int count = 0;
    for (int num : nums) {
        if(num >= 0)
            sign = 1;
        else
            sign = -1;

        while(abs(num) > 0) {
            int digit = abs(num) % 10 * sign;
            if(digit > 0 || (digit == 1 && sign == 1))
                count++;
            num /= 10;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {-1234, 5678, -9012};
    cout << "Count: " << count_nums(nums) << endl;
    return 0;
}