```cpp
#include <vector>
#include <list>
#include <any>

bool areVectorsEqual(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if constexpr (std::is_same_v<std::any_cast<void*>(value), void*>) {
            // Do nothing
        } else if (!std::holds_alternative<bool>(value)) {
            try {
                int num = std::any_cast<int>(value);
                result.push_back(num);
            } catch (...) {
                // Ignore non-integer values
            }
        }
    }
    return result;
}