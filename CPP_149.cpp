vector<string> sorted_list_sum(vector<string> lst) {
    auto new_lst = lst;
    for (auto it = new_lst.begin(); it != new_lst.end();) {
        if (it->length() % 2 == 1) {
            it = new_lst.erase(it);
        } else {
            ++it;
        }
    }
    sort(new_lst.begin(), new_lst.end(),
         [](const string &a, const string &b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    return new_lst;
}