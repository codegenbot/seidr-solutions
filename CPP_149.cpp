lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& s1, const string& s2) {
        if (s1.length() == s2.length()) {
            return s1 < s2;
        }
        return s1.length() < s2.length();
    });
    return lst;
}