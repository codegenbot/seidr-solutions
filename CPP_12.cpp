if (strings.empty())
        return "None";

    string longest_str = strings[0];
    for (const string &str : strings) {
        if (str.size() > longest_str.size() || (str.size() == longest_str.size() && str < longest_str)) {
            longest_str = str;
        }
    }
    return longest_str;
}