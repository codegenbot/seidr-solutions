```cpp
#include <vector>
#include <list>

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list-any values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            result.push_back(get<int>(value));
        }
    }
    return result;
}