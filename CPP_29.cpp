```cpp
int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    std::vector<std::string> result = filter_by_prefix(strings, "xxx");
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), "xxx") == true);
    return 0;
}