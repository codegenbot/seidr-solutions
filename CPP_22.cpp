```cpp
#include <initializer_list>
#include <vector>
#include <list>
#include <any>
#include <algorithm>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::is_same_v<std::remove_pointer_t<std::decay_t<decltype(value)>>, int>) { 
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

bool std::issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}