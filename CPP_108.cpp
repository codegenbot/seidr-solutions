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
            else
                negativeFound = true;
            num /= 10;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    cout << "Count: " << count_nums({-1234, 5678, -9012}) << endl;
    return 0;