```cpp
#include <any>
#include <list>
#include <vector>
#include <cassert>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) { 
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

bool same_vector(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::list<std::any> values = {{1}, {2}, {3}, {"hello"}, {4.5}};
    auto result = filter_integers(values);
    assert(same_vector(result, {1, 2, 3}));
    return 0;
}