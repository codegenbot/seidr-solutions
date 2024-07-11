bool Solution::issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

assert(Solution::issame(Solution::filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAA", "xxx"}, "xxx"), {"xxx", "xxxAA", "xxx"}));