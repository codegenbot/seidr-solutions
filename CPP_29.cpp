int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    assert(issame(filter_by_prefix({"hello", "world", "cpp", "code", "contest"}, "c"), {"cpp", "code", "contest"}));
    assert(issame(filter_by_prefix({"apple", "banana", "cherry", "orange", "grape"}, "b"), {"banana"}));
    return 0;
}