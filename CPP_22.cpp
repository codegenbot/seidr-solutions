```cpp
#include <vector>
#include <any>
#include <list>
#include <memory>
#include <initializer_list>

bool issame(const std::pmr::vector<int>& a, const std::pmr::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int integer = std::any_cast<int>(value);
            if (!integer) {
                continue;
            }
            result.push_back(integer);
        }
    }
    return result;
}

int main() {
    std::list<std::any> input = {{3}, {97}, {3}, {3}, {98}, {99}};
    assert(issame(filter_integers(input), std::vector<int>{3, 3, 3}));
    return 0;
}