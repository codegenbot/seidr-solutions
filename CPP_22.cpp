```cpp
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
    std::any a = 3;
    std::any b = 'c';
    std::any c = 3;
    std::any d = 3;
    std::any e = 'a';
    std::any f = 'b';
    std::list<std::any> values = {a, b, c, d, e, f};
    assert(issame(filter_integers(values) ,{3, 3, 3}));
    return 0;
}