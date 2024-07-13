vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
        [](const string& a, const string& b) { return (int)a.length() % 2 == 1; });
    vector<string> result(it, lst.end());
    sort(result.begin(), result.end(),
        [](const string& a, const string& b) {
            if ((int)a.length() != (int)b.length())
                return (int)a.length() < (int)b.length();
            else
                return a < b;
        });
    return result;
}