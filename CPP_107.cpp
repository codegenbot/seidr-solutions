#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    int even_count = 0, odd_count = 0;

    auto is_palindrome = [](int num) {
        string s = to_string(num);
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());
        return s == rev_s;
    };

    for (int i = 1; i <= n; ++i) {
        if (is_palindrome(i)) {
            if (i % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }

    return {even_count, odd_count};
}

int main() {
    assert(even_odd_palindrome(1) == (vector<int>{0, 1}));
    assert(even_odd_palindrome(10) == (vector<int>{1, 9}));
    
    // Add more tests if necessary

    return 0;
}