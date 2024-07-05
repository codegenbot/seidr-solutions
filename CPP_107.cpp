#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool isPalindrome(int num) {
    string str = to_string(num);
    string rev_str = string(str.rbegin(), str.rend());
    return str == rev_str;
}

vector<int> even_odd_palindrome(int n) {
    int even_count = 0, odd_count = 0;
    for (int i = 1; i <= n; ++i) {
        if (isPalindrome(i)) {
            if (i % 2 == 0) {
                ++even_count;
            } else {
                ++odd_count;
            }
        }
    }
    return {even_count, odd_count};
}

bool issame(const vector<int> &a, const vector<int> &b) {
    return a == b;
}

int main() {
    assert (issame(even_odd_palindrome(1), {0, 1}));
    cout << "Test passed." << endl;
    return 0;
}