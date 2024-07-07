int main() {
    std::vector<std::string> strings({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"});
    std::vector<std::string> result = filter_by_prefix(strings, "xxx");
    assert(result.size() == 4); 
    return 0;
}