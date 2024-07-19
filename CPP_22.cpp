```cpp
#include <any>
#include <list>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) { 
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result.empty() ? std::vector<int>() : result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

assert(issame({1, 2, 3}, filter_integers({std::any(1), std::any(2), std::any(3), std::any("hello"), std::any(4.5)}));