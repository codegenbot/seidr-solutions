string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c >= 'a' && c <= 'z') {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
        } else {
            result += c;
        }
    }
    return result;
}