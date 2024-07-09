vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
                     [](const string& a, const string& b) {
                         return (a.length() % 2 != 0 && !b.empty()) ||
                                (!a.empty() && b.length() % 2 != 0);
                     });
    lst.erase(it, lst.end());
    std::stable_sort(lst.begin(), lst.end(),
                     [](const string& a, const string& b) {
                         if (a.length() == b.length())
                             return a < b;
                         return a.length() < b.length();
                     });
    return lst;
}