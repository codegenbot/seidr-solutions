```
#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int by_length(const vector<string>& a, const vector<string>& b) {
    return a.size() - b.size();
}

int main() {
    assert (issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}
```