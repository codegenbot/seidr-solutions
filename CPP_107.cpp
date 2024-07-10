std::vector<int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; i++) {
        if (i == reverse(i)) {
            if (i % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    return std::vector<int> {{even}, {odd}};
}