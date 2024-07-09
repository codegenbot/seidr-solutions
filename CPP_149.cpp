vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
                     [](const string& a, const string& b) { return (a.size() % 2 != 0 && b.size() % 2 == 0) || (a.size() % 2 == 0 && b.size() % 2 != 0); });
    lst.erase(it, lst.end());
    
    vector<string> sorted;
    for(auto str : lst){
        sorted.push_back(str);
    }
    sort(sorted.begin(), sorted.end(),
         [](const string& a, const string& b) {
             if(a.length() == b.length()) {
                 return a < b;
             } else {
                 return a.size() < b.size();
             }
         });
    
    return sorted;
}