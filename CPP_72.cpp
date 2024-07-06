#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (!is_palindrome(str)) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

bool is_palindrome(std::string s) {
    std::string rev = s;
    std::reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    // You can add more test cases here
    return 0;
}