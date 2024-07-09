int main() {
    vector<string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert(issame(result, {"grunt", "prune"}));
    return 0;
}