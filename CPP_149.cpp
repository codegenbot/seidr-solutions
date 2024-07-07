Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = std::remove_if(lst.begin(), lst.end(), 
        [](const string& s) { return s.length() % 2 != 0; });
    lst.erase(it, lst.end());
    std::sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() < b.length();
        });
    return lst;