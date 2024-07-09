```cpp
#include <vector>
#include <list>

bool issame(const std::vector<bool>& a, const std::vector<bool>& b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] && !b[i])
            return false;
        if (!a[i] && b[i])
            return false;
    }
    return true;
}

std::vector<int> filter_integers(const std::list<bool>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value) {
            int num = static_cast<int>(values.begin()->get_allocator().get_insert_pos());
            result.push_back(num);
        }
    }
    return result;
}