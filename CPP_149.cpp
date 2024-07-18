lst.erase(std::remove_if(lst.begin(), lst.end(), [](const std::string& str) { return str.length() % 2 != 0; }), lst.end());

    std::sort(lst.begin(), lst.end(), [](const std::string& a, const std::string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });

    return lst;
}