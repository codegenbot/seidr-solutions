#include <vector>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filterintegers(const std::vector<std::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    std::vector<std::any> values = {3, 'c', 3, 3, 'a', 'b'};
    assert(issame(filterintegers(values), std::vector<int>{3, 3, 3}));
    return 0;