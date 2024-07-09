#include <vector>
#include <any>
#include <list>
#include <memory>

bool issame(const std::pmr::vector<int>& a, const std::vector<int>& b) {
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
    assert(issame(filter_integers({3, 97, 3, 3, 98, 99}), {3, 3, 3}));
    return 0;
}