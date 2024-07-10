```cpp
#include <algorithm>
#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] + b[i] != sortListSum({{a[i], b[i]}})[0]) return false;
    }
    return true;
}

std::vector<std::string> sortListSum(std::vector<std::string> v) {
    std::sort(v.begin(), v.end());
    return v;
}