#include <vector>
#include <list>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).has_value()) {
            result.push_back(any_cast<int>(value).get());
        }
    }
    return result;
}

int main() {
    assert(std::issame(filter_integers({3, 97, 3, 3, 98, 65}), std::vector<int>{3, 3, 3}));
    return 0;
}