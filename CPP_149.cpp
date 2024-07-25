lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.size() % 2 != 0; }), lst.end());
sort(lst.begin(), lst.end(), [](const string& a, const string& b) { 
    if (a.size() == b.size()) {
        return a < b;
    } else {
        return a.size() < b.size();
    }
});
return lst;