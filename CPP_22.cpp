```cpp
#include <vector>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(const std::vector<std::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            try {
                result.push_back(std::any_cast<int>(value));
            } catch (...) {
                throw "Error: Not all elements in the vector are integers.";
            }
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}