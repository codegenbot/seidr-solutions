```cpp
#include <type_traits>

template<typename T1, typename T2>
bool same(const std::vector<T1>& a, const std::vector<T2>& b) {
    if (a.size() != b.size())
        return false;

    for (size_t i = 0; i < a.size(); ++i)
        if (!(a[i] == b[i]))
            return false;

    return true;
}

#include <any>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}