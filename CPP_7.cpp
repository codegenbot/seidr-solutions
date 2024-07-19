int main() {
    assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") == std::vector<std::string>{"grunt", "prune"});
    return 0;
}