vector<string> sorted_list_sum(vector<string> lst) {
    auto it = lst.begin();
    while (it != lst.end()) {
        if ((it->length() & 1)) { // check for odd length
            it = lst.erase(it);
            if (it == lst.end())
                break;
        } else
            ++it;
    }
    sort(lst.begin(), lst.end(), 
         [](const string& a, const string& b) {
             if (a.length() != b.length()) // sort by length first
                 return a.length() < b.length();
             else
                 return a < b; // then by alphabetical order
         });
    return lst;
}