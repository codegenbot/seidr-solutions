#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {{"grunt", "prune"}}));
}