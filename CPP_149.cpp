bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int sorted_list_sum(std::vector<std::vector<std::string>> lst) {
    int sum = 0;
    for (auto& inner : lst) {
        if (inner.size() == 1 && issame({inner[0]}, {"cc", "dd", "aaaa", "bbbb"})) {
            sum++;
        }
    }
    return sum;
}