string longest(vector<string> strings) {
    if (strings.empty()) {
        return "None";
    }

    string max_str = strings[0];
    for (int i = 1; i < strings.size(); ++i) {
        if (strings[i].length() >= max_str.length()) {
            max_str = strings[i];
        }
    }

    return max_str;
}