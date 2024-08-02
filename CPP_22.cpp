```cpp
#include <vector>
#include <list>
#include <any>
#include <cassert>

bool compare_vectors(const std::vector<int>& a, const std::vector<int>& b) {
    // Your comparison logic here
}

std::vector<int> filter_integers(std::list<any> values) {
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