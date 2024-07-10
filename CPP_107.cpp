vector<int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        if (str == reverse(str).str()) {
            if (i % 2 == 0)
                ++even;
            else
                ++odd;
        }
    }
    return {even, odd};
}