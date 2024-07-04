if (strings.empty()) return "None";
    string longestStr = "";
    for (const string& str : strings) {
        if (str.length() > longestStr.length()) {
            longestStr = str;
        }
    }
    return longestStr;
}