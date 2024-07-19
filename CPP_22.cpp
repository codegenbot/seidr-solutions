#include <initializer_list>
#include <vector>
#include <any>

namespace std {
template <typename T>
std::vector<T> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::is_same_v<std::remove_pointer_t<std::decay_t<decltype(value)>>, int>) { 
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

template <typename T>
bool compareVectors(const std::vector<T>& a, const std::vector<T>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::list<std::any> values = {{1}, {2}, {3}, {"hello"}, {4.5}};
    auto result = filter_integers(values);
    assert(compareVectors(result, {1, 2, 3}));
    return 0;
}