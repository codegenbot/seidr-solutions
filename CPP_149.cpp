Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = remove_if(lst.begin(), lst.end(), [](const string& s){ return s.size() % 2 != 0; });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b){
        if(a.size() == b.size()) {
            return a < b;
        }
        return a.size() < b.size();
    });
    return lst;
}