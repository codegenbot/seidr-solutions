#include <vector>
#include <any>
#include <sstream>

bool issame(const std::any& value) {
    return value.type() == typeid(int);
}

std::vector<int> filter_integers(std::any values) {
    std::vector<int> result;
    if (issame(values)) {
        result.push_back(std::any_cast<int>(values));
    }
    return result;
}