sort(lst.begin(), lst.end(), [](string a, string b) {
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
});
lst.erase(remove_if(lst.begin(), lst.end(), [](string s) { return s.size() % 2 != 0; }), lst.end());
return lst;