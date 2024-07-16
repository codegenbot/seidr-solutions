sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    return a.length() < b.length();
});

auto it = remove_if(lst.begin(), lst.end(), [](const string& s) {
    return s.length() % 2 != 0;
});
lst.erase(it, lst.end());

return lst;
}