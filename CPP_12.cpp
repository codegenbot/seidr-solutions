if (strings.empty()) return "None";
    string longest_str = "";
    for (const string& s : strings) {
        if (s.length() > longest_str.length()) {
            longest_str = s;
        }
    }
    return longest_str;
}