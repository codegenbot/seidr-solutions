int main {
    std::vector<std::string> strings;
    strings.push_back("hello");
    strings.push_back("hi");
    strings.push_back("helloworld");

    std::string prefix = "h";
    std::vector<std::string> result = filter_by_prefix(strings, prefix);

    for (const auto& str : result) {
        std::cout << str << std::endl;
    }

}