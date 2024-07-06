bool is_palindrome(string text) {
    string t = text;
    for (int i = 0; i < t.length() / 2; ++i) {
        if (t[i] != t[t.length() - 1 - i])
            return false;
    }
    return true;
}