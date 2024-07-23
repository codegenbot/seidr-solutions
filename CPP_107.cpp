vector<int> result = {0, 0};
        for (int i = 1; i <= n; ++i) {
            string str = to_string(i);
            bool isPalindrome = true;
            for (int j = 0; j < str.size() / 2; ++j) {
                if (str[j] != str[str.size() - j - 1]) {
                    isPalindrome = false;
                    break;
                }
            }
            if (isPalindrome) {
                if (i % 2 == 0) {
                    ++result[0];
                } else {
                    ++result[1];
                }
            }
        }
        return result;
    }