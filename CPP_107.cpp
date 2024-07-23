int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        string revNum = num;
        reverse(revNum.begin(), revNum.end());
        if (num == revNum) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    return {even, odd};
}