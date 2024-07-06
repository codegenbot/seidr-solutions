#include <string>
using namespace std;

bool is_happy(string s) {
    long long num = stol(s);
    while (num != 1 && !is_one_digit(num)) {
        num = get_sum_of_digits(num);
    }
    return num == 1;
}

long long get_sum_of_digits(long long n) {
    long long sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool is_one_digit(long long n) {
    while (n > 9) {
        n = get_sum_of_digits(n);
    }
    return n == 1 || n == 4 || n == 7;
}