```
#include <iostream>
#include <vector>
#include <string>
#include <memory_resource>

bool issame(const std::pmr::vector<std::pmr::string>& a, const std::pmr::vector<std::pmr::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare(b[i]) != 0) {
            return false;
        }
    }
    return true;
}

std::pmr::vector<std::pmr::string> totalMatch(const std::pmr::vector<std::pmr::string>& a, const std::pmr::vector<std::pmr::string>& b) {
    std::pmr::vector<std::pmr::string> result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare("this") == 0) {
            result.push_back(b[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(totalMatch({"this"}, {}), {"this"}));
}
```