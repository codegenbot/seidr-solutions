bool is_palindrome(int num) {
    string s = to_string(num);
    int len = s.length();
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - 1 - i]) return false;
    }
    return true;
}

vector<int> even_odd_palindrome(int n) {
    int even_count = 0, odd_count = 0;
    for (int i = 1; i <= n; ++i) {
        if (is_palindrome(i)) {
            if (i % 2 == 0) ++even_count;
            else ++odd_count;
        }
    }
    return {even_count, odd_count};
}