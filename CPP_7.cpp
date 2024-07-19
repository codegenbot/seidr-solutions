```cpp
int main() {
    std::vector<std::string> b = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), b));
    return 0;
}