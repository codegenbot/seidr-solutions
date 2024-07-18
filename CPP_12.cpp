if (strings.empty()) {
        return "None";
    }
    string longestStr = strings[0];
    int maxLength = strings[0].size();
    for (const string& s : strings) {
        if (s.size() > maxLength || (s.size() == maxLength && s < longestStr)) {
            maxLength = s.size();
            longestStr = s;
        }
    }
    return longestStr;
}