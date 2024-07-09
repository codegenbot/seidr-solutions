```cpp
int main() {
    vector<string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert(issame(vector<string>{result.begin(), result.end()}, {"grunt", "prune"}));
    return 0;
}