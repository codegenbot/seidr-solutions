int compare_strings(const string& a, const string& b) {
    if (a.empty() && b.empty())
        return 0;
    
    for (size_t i = 0; i < min(a.size(), b.size()); ++i) {
        if (std::tolower(a[i]) > std::tolower(b[i]))
            return 1;
        else if (std::tolower(a[i]) < std::tolower(b[i]))
            return -1;
    }
    if (a.size() > b.size())
        return 1;
    else if (a.size() < b.size())
        return -1;
    return 0;
}