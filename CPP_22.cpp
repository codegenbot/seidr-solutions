```cpp
#include <vector>
#include <any>
#include <list>

std::vector<int> filter_integers(std::list<std::any> values);

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 3, 3}), {3, 3, 3}));
    return 0;
}