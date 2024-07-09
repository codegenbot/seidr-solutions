string longest(vector<string> strings) {
    if (strings.empty()) {
        return "None";
    }

    string longestStr = strings[0];
    for (const string& s : strings) {
        if (s.size() > longestStr.size() || (s.size() == longestStr.size() && s < longestStr)) {
            longestStr = s;
        }
    }

    return longestStr;
}