int main() {
    std::vector<std::string> vec = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> expected = {"grunt", "prune"};
    std::vector<std::string> input_vec = vec;
    filter_by_substring(input_vec, "run");
    assert(issame(input_vec, expected));
    return 0;
}