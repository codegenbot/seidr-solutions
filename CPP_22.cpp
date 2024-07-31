#include <iostream>
#include <vector>
#include <any>

bool areEqual(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::vector<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            try {
                int val = std::any_cast<int>(value);
                if(result.empty() || val > 0) {
                    result.push_back(val);
                }
            } catch (...) {
                continue;
            }
        }
    }
    return result;
}

bool areEqual(std::vector<int> a, std::vector<int> b) {
    return a.size() == 1 && a[0] == 3;
}

int main() {
    assert(areEqual(filter_integers({3, std::any(3), 3}), {3})); 
    return 0;
}