int main() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> b = {"grunt", "prune"};
    std::vector<std::string> c = filter_by_substring(str, "run");
    assert(issame(c,b)); 
    return 0;
}