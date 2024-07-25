lst.erase(std::remove_if(lst.begin(), lst.end(), [](const string& s){ return s.size() % 2 == 1; }), lst.end());
    std::sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.size() == b.size()) {
            return a < b;
        }
        return a.size() < b.size();
    });
    return lst;