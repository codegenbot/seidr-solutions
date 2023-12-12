```
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
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

std::string totalMatch(const std::string& a, const std::string& b) {
    std::string result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare("this") == 0) {
            result.push_back(b[i]);
        }
    }
    return result;
}

int main() {
    std::string a = {"this"};
    std::string b;
    assert(issame(totalMatch({"this"}, {"that"}), {}));
}
```