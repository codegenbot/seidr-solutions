vector<string> sorted_list_sum(vector<string> lst) {
    auto isSame = [](const string& a, const string& b) {
        bool sameLength = (a.length() == b.length());
        return sameLength && (a.length() % 2 != b.length() % 2);
    };

    auto it = unique(lst.begin(), lst.end(), isSame);
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