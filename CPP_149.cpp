vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
                     [](const string& a, const string& b){ return (a.size() % 2 == 0 && b.size() % 2 != 0) || (a.size() % 2 != 0 && b.size() % 2 == 0); });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(), 
         [](const string& a, const string& b){ return (a.size() == b.size()) ? a < b : a.size() < b.size(); });
    return lst;
}