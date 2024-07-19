int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        bool isPalindrome = true;
        for (int j = 0; j < num.size() / 2; ++j) {
            if (num[j] != num[num.size() - 1 - j]) {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    return {even, odd};
}