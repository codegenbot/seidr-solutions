string longest(vector<string> strings) {
    if (strings.empty()) return ""; // return None in case the input vector is empty
    string res = strings[0];
    for (const auto& str : strings) {
        if (str.length() > res.length()) res = str;
        else if (str.length() == res.length()) res = str; // return the first one in case of multiple strings of the same length
    }
    return res;
}