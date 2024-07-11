#include <vector>
#include <any>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int integer = std::any_cast<int>(value);
            result.push_back(integer);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(filter_integers({3, std::any_cast<int>(42), 3, 3, std::any_cast<int>(42), 'b'}) ,{3, 3, 3}));
    return 0;
}