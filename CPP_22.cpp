#include <iostream>
#include <vector>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<std::any> filter_integers(std::vector<std::any> values) {
    std::vector<std::any> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            try {
                int val = std::any_cast<int>(value);
                if(result.empty() || val > 0) {
                    result.push_back(value); // This should be result.push_back(value), not just the value
                }
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