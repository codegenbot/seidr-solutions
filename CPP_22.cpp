```cpp
#include <vector>
#include <list>
#include <any>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::holds_alternative<int>(value)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}

int main() {
    assert(std::issame(filter_integers({1, 2, 3}), std::vector<int>{1, 2, 3}));
    return 0;
}