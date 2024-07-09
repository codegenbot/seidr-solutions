int smallest_change(std::vector<int> arr) {
    std::string s = "";
    for (int i : arr) {
        s += std::to_string(i);
    }
    int changes = 0;
    for (int i = 0; i < s.length() / 2; ++i) {
        if (s[i] != s[s.length() - i - 1]) {
            changes++;
        }
    }
    return changes;
}