int main() {
    std::vector<std::string> expected = {"xxx", "xxxAAA", "xxx"};
    std::vector<std::string> result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx");
    assert(std::equal(expected.begin(), expected.end(), result.begin()));
    return 0;
}