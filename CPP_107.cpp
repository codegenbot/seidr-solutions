int even_odd_palindrome(int n) {
    if (n < 0)
        n = -n;
    if (n % 2 != 0 || !isPalindrome(n))
        return 0;
    else
        return std::to_string(n);
}