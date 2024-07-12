std::pair<bool, std::vector<std::string>> issame(const std::string& s, const std::string& c) {
    bool same = true;
    for (char x : s) {
        bool found = false;
        for (char y : c) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found) {
            same = false;
            break;
        }
    }
    return {same, reverse_delete(s, c)};
}