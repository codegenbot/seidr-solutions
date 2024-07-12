#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(), [&](const string& str) { return std::find(b.begin(), b.end(), str) != b.end(); });
}

int main() {
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    // ...
}