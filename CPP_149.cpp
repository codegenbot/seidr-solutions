vector<string> sorted_list_sum(vector<string> lst){
    lst.erase(std::remove_if(lst.begin(), lst.end(), [](const string& str){ return str.length() % 2 != 0; }), lst.end());
    std::sort(lst.begin(), lst.end(), [](const string& a, const string& b){
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}