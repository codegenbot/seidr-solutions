#include <iostream>
#include <vector>

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

        while(abs(num) > 0 || negativeFound) {
            int digit = abs(num) % 10 * sign;
            if(digit > 0 || (digit == 1 && !negativeFound))
                count++;
            num /= 10;
        }
    }
    return count;
}

int main 
{
    assert(count_nums({1}) == 1);
    cout << "Count: " << count_nums({-1234, 5678, -9012}) << endl;
    return 0;
}