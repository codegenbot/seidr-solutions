vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
        [](const string& a, const string& b) { return (a.length() % 2 == 1 && b.length() % 2 != 1) || (a.length() % 2 != 1 && b.length() % 2 == 1); });
    lst.erase(unique(it, lst.end()), lst.end());
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length())
                return a < b;
            else
                return a.length() < b.length();
        });
    return lst;
}