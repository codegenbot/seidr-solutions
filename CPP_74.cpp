#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

int main() {
    // ... other code ...
    assert(issame(total_match({"this"}, {}), {}));
}

bool issame(vector<string> a, vector<string> b) {
    if (a == b) return true;
    else return false;
}