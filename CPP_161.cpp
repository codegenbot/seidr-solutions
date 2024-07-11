string result = s;
    int n = s.size();
    bool has_letter = false;

    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            has_letter = true;
            if (islower(s[i])) {
                result[i] = toupper(s[i]);
            } else {
                result[i] = tolower(s[i]);
            }
        }
    }

    if (!has_letter) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(result[start], result[end]);
            start++;
            end--;
        }
    }

    return result;
}