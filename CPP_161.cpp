string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = (c == toupper(c)) ? tolower(c) : toupper(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? string(s).reverse() : result;
}