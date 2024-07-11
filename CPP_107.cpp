int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        string rev_str = str;
        reverse(rev_str.begin(), rev_str.end());
        if (str == rev_str) {
            (i % 2 == 0) ? ++even : ++odd;
        }
    }
    return {even, odd};
}