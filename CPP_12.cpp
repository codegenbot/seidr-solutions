string longest(vector<string> strings) {
    if (strings.empty()) return "";
    string result = strings[0];
    for (const auto& s : strings) {
        if (s.length() > result.length()) result = s;
    }
    return result;
}