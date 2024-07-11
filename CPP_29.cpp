namespace contest {
    bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
        return std::equal(a.begin(), a.end(), b.begin(), b.end());
    }
}

int main() {
    assert(contest::issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}) == true);
    return 0;
}