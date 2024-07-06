bool is_palindrome(std::string text) {
    int start = 0;
    int end = text.length() - 1;

    while (start < end) {
        if (!isalnum(text[start])) { 
            while (start < end && !isalnum(text[start])) {
                start++;
            }
            if (start >= end) return true; // If entire string is non-alphanumeric
        } else if (!isalnum(text[end])) { 
            while (start < end && !isalnum(text[end])) {
                end--;
            }
            if (start >= end) return true; // If entire string is non-alphanumeric
        }

        if (tolower(text[start]) != tolower(text[end])) {
            return false;
        } else {
            start++;
            end--;
        }
    }

    return true;
}