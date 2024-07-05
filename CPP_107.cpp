#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    int even_count = 0, odd_count = 0;

    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);
        string rev_s = string(s.rbegin(), s.rend());

        if (s == rev_s) {
            if (i % 2 == 0) {
                ++even_count;
            } else {
                ++odd_count;
            }
        }
    }

    return {even_count, odd_count};
}

int main() {
    assert((even_odd_palindrome(1) == vector<int>{0, 1}));
    assert((even_odd_palindrome(10) == vector<int>{5, 4}));
    cout << "All test cases passed!" << endl;
    return 0;
}