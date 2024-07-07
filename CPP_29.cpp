int main() {
    std::vector<std::string> strings;
    strings.push_back("xxx");
    strings.push_back("asd");
    strings.push_back("xxy");
    strings.push_back("john doe");
    strings.push_back("xxxxAA");
    strings.push_back("xxx");

    std::vector<std::string> result = filter_by_prefix(strings, "xxx");
    assert(std::operator==(result, std::vector<std::string>{"xxx", "xxxAAA", "xxx"}));
    return 0;
}