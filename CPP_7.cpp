int main() {
    std::vector<std::vector<std::string>> words = {{ "grunt" }}, {{"trumpet", "prune", "gruesome"}};
    std::string substring = "run";
    std::vector<std::vector<std::string>> expected_result = {{{"grunt"}}, {{{"prune"}}}};
    
    auto result = filter_by_substring(words, substring);
    
    assert(issame(result, expected_result));
    
    return 0;
}