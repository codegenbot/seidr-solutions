string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = toupper(c);
            if (c >= 'a' && c <= 'z') {
                c = tolower(c);
            }
        } else {
            c = '\0';
        }
        result += c;
    }
    return result;
}