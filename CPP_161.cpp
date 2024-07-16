string result = s;
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (isalpha(s[i]) && isalpha(s[j])) {
            result[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
            result[j] = islower(s[j]) ? toupper(s[j]) : tolower(s[j]);
        }
        else if (isalpha(s[i])) {
            result[j] = s[i];
        }
        else if (isalpha(s[j])) {
            result[i] = s[j];
        }
        i++;
        j--;
    }
    if (i == j && isalpha(s[i])) {
        result[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
    }
    if (count_if(s.begin(), s.end(), isalpha) == 0) {
        reverse(result.begin(), result.end());
    }
    return result;
}