string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = toupper(c);
            if (c >= 'a' && c <= 'z') {
                c = tolower(c);
            }
        } else {
            c = tolower(c);
        }
        result += c;
    }
    reverse(result.begin(), result.end());
    return result;
}