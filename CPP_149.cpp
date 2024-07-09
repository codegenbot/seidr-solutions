bool issame(string a, string b) {
    if (a.length() % 2 == 0 && b.length() % 2 != 0 || a.length() % 2 != 0 && b.length() % 2 == 0)
        return false;
    else
        return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
                      [&lst](const string& a, const string& b) { 
                          return !issame(a, b); 
                      });
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