Here is the solution:

string camelCase(string s) {
    string result = "";
    for (char c : s + " ") {
        if (c == '-') {
            result += toupper(s[s.find(c) + 1]);
            s.erase(s.find(c), 1);
        } else if (c == ' ') {
            if (!result.empty()) {
                result += toupper(c);
            }
        } else {
            result += c;
        }
    }
    return result;
}