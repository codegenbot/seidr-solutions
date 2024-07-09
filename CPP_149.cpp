lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s){ return s.length() % 2 == 1; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b){ return a.length() != b.length() ? a.length() < b.length() : a < b;});
    return lst;
}