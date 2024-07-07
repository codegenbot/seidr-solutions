vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
        [](const string& a, const string& b){ return (a.size() % 2 == 1 && b.size() % 2 == 0) || (a.size() % 2 == 0 && b.size() % 2 == 1); });
    lst.erase(unique(lst.begin(), it), lst.end());
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b){ if (a.size() != b.size()) return a.size() < b.size(); else return a < b; });
    return lst;
}