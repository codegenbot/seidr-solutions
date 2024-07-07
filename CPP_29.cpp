bool areSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size();
}

int main() {
    assert(areSame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}) == true);
    return 0;
}