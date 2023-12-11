```
#include <memory>
#include <vector>
#include <string>

bool issame(const std::pmr::vector<std::string>& a, const std::pmr::vector<std::string>& b) {
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

std::pmr::vector<std::string> total_match(const std::pmr::vector<std::string>& a, const std::pmr::vector<std::string>& b) {
    std::pmr::vector<std::string> result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare("this") == 0) {
            result.push_back(b[i]);
        }
    }
    return result;
}
```