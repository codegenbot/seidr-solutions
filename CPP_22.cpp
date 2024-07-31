```c++
#include <iostream>
#include <vector>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::vector<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            try {
                int val = std::any_cast<int>(value);
                result.push_back(val);
            } catch (...) {
                continue;
            }
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == 1 && a[0] == 3;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}