bool is_palindrome(string text) {
    string s = text;
    reverse(s.begin(), s.end());
    return (s == text);
}