```cpp
#include <cassert>
#include <any>
#include <list>
#include <vector>

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

assert(issame({1, 2, 3}, filter_integers({{1}, {2}, {3}, {"hello"}, {4.5}}));