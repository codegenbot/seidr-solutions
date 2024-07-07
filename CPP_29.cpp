int main() {
    std::vector<std::string> strings({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"});
    std::vector<std::string> result = filter_by_prefix(strings, "xxx");
    assert(result == std::vector<std::string>{"xxx", "xxx", "xxx"}); 
    return 0;
}