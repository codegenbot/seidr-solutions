#include <string>
using namespace std;

bool is_happy(string s) {
    int num = stoi(s);
    set<int> seen;
    while (num != 1 && !seen.count(num)) {
        seen.insert(num);
        num = get_digit_sum(num);
    }
    return num == 1;
}

int get_digit_sum(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}