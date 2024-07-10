#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {{"grunt", "prune"}}));
}