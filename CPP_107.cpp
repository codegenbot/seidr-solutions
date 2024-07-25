int countPalindromes(int num) {
        int count = 0;
        while (num > 0) {
            count = count * 10 + num % 10;
            num /= 10;
        }
        return count;
    }

    vector<int> even_odd_palindrome(int n) {
        vector<int> result(2, 0);
        for (int i = 1; i <= n; ++i) {
            if (i == countPalindromes(i)) {
                if (i % 2 == 0) {
                    ++result[0];
                } else {
                    ++result[1];
                }
            }
        }
        return result;
    }