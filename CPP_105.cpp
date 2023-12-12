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
    const std::vector<std::string> v1{"Nine", "Eight", "Four"};
    const std::vector<std::string> v2{"Nine", "Eight", "Four"};
    assert(issame(v1, v2));
    return 0;
}
```