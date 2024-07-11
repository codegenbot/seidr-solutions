string solve(string s) {
    string result = "";
    bool foundLetter = false;

    for (int i = 0; i < s.length(); i++) {
        if (!foundLetter && !isalpha(s[i])) {
            foundLetter = true;
        } else if (foundLetter && !isalpha(s[i])) {
            foundLetter = false;
        } else if (isalpha(s[i])) {
            result += (foundLetter ? tolower(s[i]) : toupper(s[i]));
        } else {
            result += s[i];
        }
    }

    return (result.length() > 0) ? result : string(reverse(s));
}