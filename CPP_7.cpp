```c++
int main() {
    vector<string> expected = {"grunt", "prune"};
    std::vector<std::string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert(issame(actual, expected));
    return 0; }