bool is_palindrome(string text) {
    int n = text.length();
    for (int i = 0; i < n / 2; i++) {
        if (text[i] != text[n - i - 1]) {
            return false;
        }
    }
    return true;
}
