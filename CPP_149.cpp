vector<string> sorted_list_sum(vector<string> lst){
    lst.erase(remove_if(lst.begin(), lst.end(), [](string s) { return s.size() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](string a, string b) { return (a.size() == b.size()) ? (a < b) : (a.size() < b.size()); });
    return lst;
}