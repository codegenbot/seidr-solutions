#include <iostream>
#include <string>

bool is_happy(const std::string& s);

int main() {
    assert(is_happy("iopaxioi") == false );
    return 0;
}

bool is_happy(const std::string& s) {
    int sum = 0, temp = 0;
    for(int i = 0; i < s.length(); i++) {
        temp = (s[i] - '0');
        while(temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }
    if(sum == 1 || is_happy_num(sum))
        return true;
    else
        return false;
}

bool is_happy_num(int n) {
    set<int> s;
    while(n != 1 && !s.count(n)) {
        s.insert(n);
        n = get_sum_of_digits(n);
    }
    return (n == 1);
}

int get_sum_of_digits(int num) {
    int sum = 0;
    while(num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}