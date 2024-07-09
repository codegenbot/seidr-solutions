Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
        [](const string& a, const string& b) { return (a.size() & 1) && (b.size() & 1); });
    vector<string> result(it, lst.end());
    sort(result.begin(), result.end(),
        [](const string& a, const string& b) {
            if (a.size() != b.size()) {
                return a.size() < b.size();
            } else {
                return a < b;
            }
        });
    return result;
}