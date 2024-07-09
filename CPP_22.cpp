#include <vector>
#include <list>

bool issame(const std::vector<std::any>& a, const std::vector<std::any>& b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        bool a_bool = a[i].cast<bool>();
        bool b_bool = b[i].cast<bool>();
        if (!a_bool || !b_bool)
            continue;
        int a_int = a[i].cast<int>();
        int b_int = b[i].cast<int>();
        if (a_int != b_int)
            return false;
    }
    return true;
}

std::vector<int> filter_integers(const std::list<std::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        bool value_bool = value.cast<bool>();
        if (value_bool) {
            int value_int = value.cast<int>();
            result.push_back(value_int);
        }
    }
    return result;
}