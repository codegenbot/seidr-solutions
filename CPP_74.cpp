```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].compare(b[i]) != 0)
            return false;
    }
    return true;
}