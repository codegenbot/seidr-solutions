vector<string> sorted_list_sum(vector<string> lst) {
    auto issame = [](const string& a, const string& b) {
        if (a.length() % 2 == 0 && b.length() % 2 == 0)
            return a < b;
        else
            return a.length() < b.length();
    };
    auto it = unique(lst.begin(), lst.end(),
                      [&issame](const string& a, const string& b) {
                          return issame(a, b);
                      });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(), issame);
    return lst;
}