#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {{"grunt", "prune"}}));
}