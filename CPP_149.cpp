vector<string> sorted_list_sum(vector<string> lst){
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s){ return s.size() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b){
        if (a.size() == b.size()) {
            return a < b;
        }
        return a.size() < b.size();
    });
    return lst;
}