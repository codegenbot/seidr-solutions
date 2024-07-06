```cpp
#include <vector>
#include <algorithm>
#include <string>

std::vector<std::string> bf(std::string s) {
    // Your implementation here
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(), b.end(), a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}