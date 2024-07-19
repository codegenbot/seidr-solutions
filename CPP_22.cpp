```cpp
#include <cassert>

#include <any>
#include <list>
#include <vector>
#include <typeindex>
#include <algorithm>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) { 
            int x = std::any_cast<int>(value);
            result.push_back(x); 
        }
    }
    return result.empty() ? std::vector<int>() : result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

assert(issame({1}, filter_integers({std::any(std::in_place_index<0>, 1), std::any(std::in_place_index<0>, 2), std::any(std::in_place_index<0>, 3), std::any("hello"), std::any(std::in_place_index<0>, 4)}));