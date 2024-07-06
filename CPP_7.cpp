#include <vector>
#include <string>

bool isSame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(isSame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}) );
    // ...
}