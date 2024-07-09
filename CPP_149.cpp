vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> new_lst;
    for (const auto& s : lst) {
        if (s.length() % 2 != 0)
            continue;
        new_lst.push_back(s);
    }
    sort(new_lst.begin(), new_lst.end(),
         [](const string& a, const string& b) {
             if (a.length() == b.length())
                 return a < b;
             return a.length() < b.length();
         });
    return new_lst;