bool Solution::issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

assert (Solution::issame(Solution::filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAA", "xxx"}, "xxx"), {"xxx", "xxxAA", "xxx"}));