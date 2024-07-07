int main {
    std::vector<std::string> strings = getStrings();
    std::vector<std::string> concatenated = concatenate(strings);
    
    for (const auto& str : concatenated) {
        std::cout << str;
    }
}