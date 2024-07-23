int main() {
    assert(issame(filter_by_substring(std::vector<std::string>({"grunt", "trumpet", "prune", "gruesome"}), "run"), std::vector<std::string>({"grunt", "prune"})));
    return 0;
}