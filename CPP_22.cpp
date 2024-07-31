#include <vector>
#include <any>

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::any_cast<int>(value).has_value()) {
            result.push_back(std::any_cast<int>(value).get());
        }
    }
    return result;
}