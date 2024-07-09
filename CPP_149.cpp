vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
        [](const string& a, const string& b){return a.size() % 2 && b.size() % 2;});
    lst.erase(it, lst.end());
    
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b){
            if(a.size() != b.size()) return a.size() < b.size();
            else return a < b;
        });
    
    return lst;
}