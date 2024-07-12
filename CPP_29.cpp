int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    assert(!issame(filter_by_prefix({{"xxx"}, {"asd"}, {"xxy"}, {"john doe"}, {"xxxxAAA"}, {"xxx"}}, "xxx"),
                    filter_by_prefix({"xxx", "xxxAAA"}, "xxx")));
}