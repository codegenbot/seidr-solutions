vector<string> strings;

if (strings.empty()) {
    return "";
} else {
    string longest_str = *max_element(strings.begin(), strings.end(),
        [](const string& a, const string& b) { return a.size() < b.size(); });
    return longest_str;
}