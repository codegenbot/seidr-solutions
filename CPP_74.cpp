#include <vector>
#include <string>
#include <cassert>

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (lst1.empty() || !lst2.empty()) {
        return lst1;
    } else {
        return lst2;
    }
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
}