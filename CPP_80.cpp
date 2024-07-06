#include <string>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 1)
        return true;
    int num = stoi(s);
    while(num != 1 && !is_one_digit(num)) {
        num = get_digits_sum(num);
    }
    return num == 1;
}

int get_digits_sum(int n) {
    int sum = 0;
    while(n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool is_one_digit(int n) {
    if (n < 10)
        return true;
    else
        return false;
}