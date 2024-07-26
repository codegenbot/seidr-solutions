string result = s;
    int n = s.size();
    bool hasLetter = false;

    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            hasLetter = true;
            if (islower(s[i])) {
                result[i] = toupper(s[i]);
            } else {
                result[i] = tolower(s[i]);
            }
        }
    }

    if (!hasLetter) {
        int left = 0, right = n - 1;
        while (left < right) {
            swap(result[left], result[right]);
            left++;
            right--;
        }
    }

    return result;
}