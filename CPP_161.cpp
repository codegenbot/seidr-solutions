string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            c = (c == 'z') ? 'A' - ('z' - c) : c + 1;
        }
        else {
            result += c;
        }
    }
    return result.empty() ? string(s.rbegin(), s.rend()) : result;
}