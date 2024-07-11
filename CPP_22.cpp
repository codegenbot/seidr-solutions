#include <vector>
#include <list>
#include <any>

bool compareVectors(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if constexpr (std::any_cast<void*>(value) != nullptr) {
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