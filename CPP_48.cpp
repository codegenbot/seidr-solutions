bool is_palindrome(const string& text) {
    int left = 0;
    int right = text.size() - 1;
    while (left < right) {
        if (text[left] != text[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    // Add more test cases here
    return 0;
}