#include <vector>
#include <any>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(const std::vector<std::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            try {
                int num = std::any_cast<int>(value);
                result.push_back(num);
            } catch (...) {
                // handle the exception
            }
        }
    }
    return result;
}