bool is_palindrome(const string& text) {
    int n = text.length();
    for (int i = 0; i < n / 2; i++) {
        if (text[i] != text[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    // Add more test cases here
    return 0;
}