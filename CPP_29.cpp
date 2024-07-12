int main() {
    std::vector<std::string> strings = {"apple", "banana", "apricot", "grape"};
    std::string prefix = "a";
    std::vector<std::string> result = filter_by_prefix(strings, prefix);
    for (auto s : result) {
        std::cout << s << std::endl;
    }
}