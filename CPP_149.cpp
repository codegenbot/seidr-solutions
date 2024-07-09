bool issame(string a, string b) {
    if (a.length() == b.length()) {
        for(int i = 0; i < a.length(); i++) {
            if(a[i] != b[i]) return false;
        }
        return true;
    } else
        return false;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
                      [](const string& a, const string& b)
                      { return !issame(a, b); });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.length() == b.length())
                 return a < b;
             else
                 return a.length() < b.length();
         });
    return lst;
}