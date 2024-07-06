bool is_palindrome(std::string text) {
    int start = 0;
    int end = text.length() - 1;

    while (start < end) {
        if (!isalnum(text[start])) { // skip non-alphanumeric chars at the start
            start++;
            continue;
        }
        if (!isalnum(text[end])) { // skip non-alphanumeric chars at the end
            end--;
            continue;
        }
        if (text[start] != text[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}