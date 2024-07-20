if (strings.empty()) {
    return "";
} else {
    string result = *min_element(strings.begin(), strings.end(),
        [](const string& a, const string& b) {return a.size() < b.size(); });
    return result;
}