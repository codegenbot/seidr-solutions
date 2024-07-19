int compare_strings(const std::string& a, const std::string& b) {
    for (size_t i = 0; i < a.size() && i < b.size(); ++i) {
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