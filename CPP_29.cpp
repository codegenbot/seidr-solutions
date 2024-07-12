int main { 
    std::vector<std::string> input = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    const std::string prefix = "xxx";
    std::vector<std::string> output = filter_by_prefix(input, prefix);
    std::vector<std::string> expected = {{"xxx"}, {"xxxAAA"}, {"xxx"}};
    assert(areEqual(output, expected));
    return 0;
}