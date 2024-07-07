vector<string> sorted_list_sum(vector<string> lst) {
    auto it = std::stable_partition(lst.begin(), lst.end(),
        [](const string& s) { return s.size() % 2; });
    vector<string> result(it, lst.end());
    std::sort(result.begin(), result.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() < b.size();
        });
    return result;
}