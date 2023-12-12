```
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::pmr::string& a, const std::pmr::string& b) {
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

std::pmr::string totalMatch(const std::pmr::string& a, const std::pmr::string& b) {
    std::pmr::string result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare("this") == 0) {
            result.push_back(b[i]);
        }
    }
    return result;
}

int main() {
    std::pmr::string a = {"this"};
    std::pmr::string b;
    assert(issame(totalMatch({"this"}, {"that"}), {}));
}
```