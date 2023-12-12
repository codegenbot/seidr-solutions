```
#include <vector>
#include <string>

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
```
```
int main() {
    std::vector<std::string> v1 = {9, 4, 8};
    std::vector<std::string> v2 = {"Nine", "Eight", "Four"};
    assert (issame(by_length(v1) , v2));
}
```