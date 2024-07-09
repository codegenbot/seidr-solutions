#include <vector>
#include <list>
#include <optional>

bool issame(const std::vector<std::any> &a, const std::vector<std::any> &b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        auto bool_val_a = std::any_cast<bool>(a[i]);
        auto bool_val_b = std::any_cast<bool>(b[i]);
        if (!bool_val_a || !bool_val_b)
            continue;
        if (std::any_cast<int>(a[i]) != std::any_cast<int>(b[i]))
            return false;
    }
    return true;
}

std::vector<int> filter_integers(const std::list<std::any> &values) {
    std::vector<int> result;
    for (const auto &value : values) {
        if (std::any_cast<bool>(value)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}