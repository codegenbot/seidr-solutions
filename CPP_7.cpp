int main() {
    std::vector<std::string> vec = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> expected = {"grunt", "prune"};
    filter_by_substring(vec, "run");
    assert(issame(vec, expected));
    return 0;
}