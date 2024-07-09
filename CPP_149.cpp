vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b) -> bool {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() < b.length();
        });
    auto it = unique(lst.begin(), lst.end());
    lst.erase(it, lst.end());
    return lst;
}