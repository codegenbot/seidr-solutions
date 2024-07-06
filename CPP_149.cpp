vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
                     [](const string& a, const string& b) { return (stoi(a.substr(4)) + stoi(b.substr(4))) % 2 == 1; });
    lst.erase(it, lst.end());
    
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (stoi(a.substr(4)) != stoi(b.substr(4)))
                 return stoi(a.substr(4)) < stoi(b.substr(4));
             else
                 return a < b;
         });
    
    return lst;
}