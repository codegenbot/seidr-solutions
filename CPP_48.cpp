int left = 0;
    int right = text.length() - 1;

    while (left < right) {
        if (!isalnum(text[left])) {
            left++;
            continue;
        }
        if (!isalnum(text[right])) {
            right--;
            continue;
        }
        if (tolower(text[left]) != tolower(text[right]))
            return false;
        left++;
        right--;
    }

    return true;
}