#include <vector>
#include <cmath>
using namespace std;

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        bool firstDigit = true;
        while (num != 0) {
            int digit = num % 10;
            if (firstDigit && num < 0) {
                digit = -digit;
                firstDigit = false;
            }
            sum += abs(digit);
            num /= 10;
        }
        if (sum > 0) count++;
    }
    return count;
}