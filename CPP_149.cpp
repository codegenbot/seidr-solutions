vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
                     [](const string& a, const string& b){ return (a.length() % 2 == 1 && !b.empty()) || (b.length() % 2 == 0 && !a.empty()); });
    lst.erase(it, lst.end());
    
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length())
                 return a.length() < b.length();
             else
                 return a < b;
         });

    return lst;
}