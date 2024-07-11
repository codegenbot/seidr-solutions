vector<string> sorted_list_sum(vector<string> lst) {
    auto new_lst = lst;
    new_lst.erase(remove_if(new_lst.begin(), new_lst.end(),
        [](const string& str){ return str.length() % 2 != 0; }), new_lst.end());
    sort(new_lst.begin(), new_lst.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() < b.length();
    });
    return new_lst;
}