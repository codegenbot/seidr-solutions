```
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int by_length(const std::vector<std::string>& v) {
    int length = 0;
    for (const auto& s : v) {
        length += s.size();
    }
    return length;
}

int main() {
    assert(issame(by_length({"Nine", "Eight", "Four"}), {"Nine", "Eight", "Four"}));
    return 0;
}
```