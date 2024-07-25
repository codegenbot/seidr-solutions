#include <vector>
#include <sstream>

bool issame(const std::any& val) {
    return val.type() == typeid(int);
}

std::vector<int> filter_integers(std::any values) {
    std::vector<int> result;
    for (const auto& val : std::any_cast<std::vector<std::any>>(values)) {
        if (issame(val)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}