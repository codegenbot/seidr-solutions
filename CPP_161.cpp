string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            if (result.empty() || !isupper(result.back())) {
                c = toupper(c);
            }
        }
        result += c;
    }
    if (result.empty()) {
        reverse(result.begin(), result.end());
    }
    return result;
}