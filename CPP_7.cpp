#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(std::equal(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}