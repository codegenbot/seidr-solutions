int compare_strings(const std::string& a, const std::string& b) {
    if (a > b)
        return 1;
    else if (b > a)
        return -1;
    else
        return 0;
}