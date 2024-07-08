#include <vector>
#include <any>

bool are_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(const std::vector<std::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

int main_test() {
    assert(is_same(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}