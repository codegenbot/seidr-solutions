```cpp
#include <vector>
#include <list>
#include <any>

bool compare_vectors(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(std::equal(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {1, 2, 3}));
    return 0;
}