#include <vector>

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num < 0) {
            num = -num; // make it positive to calculate signed digits
        }
        int sum_of_digits = 0;
        int temp = num;
        while (temp > 0) {
            sum_of_digits += temp % 10;
            temp /= 10;
        }
        if (sum_of_digits > 0) {
            count++;
        }
    }
    return count;
}