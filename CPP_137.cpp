```cpp
int compare_strings(const std::string& a, const std::string& b) {
    for (int i = 0; i < a.length() && i < b.length(); i++) {
        if (a[i] > b[i])
            return 1;
        else if (b[i] > a[i])
            return -1;
    }
    if (a.length() > b.length())
        return 1;
    else if (a.length() < b.length())
        return -1;
    return 0;
}