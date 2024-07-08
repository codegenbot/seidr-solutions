#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int count_nums(vector<int> nums) {
    int sign = 1; 
    int count = 0;
    for (int num : nums) {
        bool negativeFound = false;
        if(num >= 0)
            sign = 1;
        else
            sign = -1, negativeFound = true;

        while(abs(num) > 0 || (negativeFound && abs(num) < 0)) {
            int digit = abs(num) % 10 * sign;
            if((digit > 0 && !negativeFound) || (digit == 1 && negativeFound))
                count++;
            num /= 10;
        }
    }
    return count;

}

cout << count_nums({-123, -9, 3, 2, -11, 4, 5, -9, -6, 8, 7}) << endl;