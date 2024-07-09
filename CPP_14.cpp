```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a) { 
    if (a.size() == 0) return true;
    for (int i = 1; i < a.size(); i++) {
        if (!issame({a[i-1]})) return false;
    }
    return true;
}

const std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(issame(all_prefixes("WWW")));
    return 0;
}