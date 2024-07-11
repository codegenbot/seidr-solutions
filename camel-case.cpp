Here is the solution:

string camelCase(string s) {
    string result = "";
    size_t prev = 0;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            result += toupper(s.substr(prev + 1, i - prev).c_str())[0];
            prev = i + 1;
        }
    }
    if (prev < s.length()) {
        result += toupper(s.substr(prev).c_str());
    }
    return result;
}