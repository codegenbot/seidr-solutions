int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    auto result = filter_by_prefix(strings, "xxx");
    for (const auto& s : result) {
        if (s != "xxx" && s != "xxxAAA") return 1;
    }
}