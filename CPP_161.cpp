string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            if (result.back() == 'z' || result.back() == 'Z') {
                c = toupper(c);
            }
        } else {
            c = c;
        }
        result += c;
    }
    if (result.empty()) {
        reverse(result.begin(), result.end());
    }
    return result;
}