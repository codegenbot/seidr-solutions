string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            c = (c == 'z' || c == 'Z') ? (c == 'z' ? 'A' : 'a') : toupper(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? string(s).reverse() : result;
}