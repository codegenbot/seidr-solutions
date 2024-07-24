bool issame(const vector<string>& a, const vector<string>& b) {
    return accumulate(a.begin(), a.end(), 0, [](int sum, const string& s) { return sum + s.length(); }) ==
           accumulate(b.begin(), b.end(), 0, [](int sum, const string& s) { return sum + s.length(); });
}

int sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_lst = lst;
    sorted_lst.erase(remove_if(sorted_lst.begin(), sorted_lst.end(), 
        [](const string& s) { return s.length() % 2 != 0; }), sorted_lst.end());
    sort(sorted_lst.begin(), sorted_lst.end(), 
        [](const string& a, const string& b) { return a.length() == b.length() ? a < b : a.length() < b.length(); });
    
    int sum = accumulate(sorted_lst.begin(), sorted_lst.end(), 0, [](int sum, const string& s) { return sum + s.length(); });
    return sum;
}