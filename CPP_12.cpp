if (strings.empty()) {
        return "None";
    }

    string longestStr = strings[0];
    for (const auto& str : strings) {
        if (str.length() > longestStr.length()) {
            longestStr = str;
        }
    }
    return longestStr;
}