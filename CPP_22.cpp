```cpp
#include <vector>
#include <list>
#include <algorithm>

bool issame(const std::vector<std::any> &a, const std::vector<std::any> &b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        auto a_bool = a[i].cast<bool>();
        auto b_bool = b[i].cast<bool>();
        if (!a_bool || !b_bool)
            continue;
        if (*a_bool != *b_bool)
            return false;
    }
    return true;
}

std::vector<int> filter_integers(const std::list<std::any> &values) {
    std::vector<int> result;
    for (const auto &value : values) {
        auto value_int = value.cast<int>();
        if (*value_int) {
            result.push_back(*value_int);
        }
    }
    return result;
}