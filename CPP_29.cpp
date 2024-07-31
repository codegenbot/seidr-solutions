int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    std::string prefix = "xxx";
    std::vector<std::string> b = filter_by_prefix(strings, prefix);
    std::vector<std::string> a = b; 
    bool result = issame(a, b); 
    return 0;
}