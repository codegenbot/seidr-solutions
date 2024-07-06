```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::string b) {
    for (int i = 0; i < a.size(); i++) {
        if (b.find(a[i]) == std::string::npos) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> bf(std::string a, std::string b) {
    std::vector<std::string> result;
    int pos = 0;
    while (pos < a.size()) {
        int found = b.find(a.substr(pos));
        if (found == std::string::npos) {
            break;
        }
        result.push_back(b.substr(found, a.size() - pos));
        pos += found + 1;
    }
    return result;
}