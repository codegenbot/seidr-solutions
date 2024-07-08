#include <any>
#include <vector>

bool issame(std::any a, std::any b) {
    if (a.type() == b.type()) {
        if (std::any_cast<int>(a) == std::any_cast<int>(b)) {
            return true;
        }
        else if (std::any_cast<char>(a) == std::any_cast<char>(b)) {
            return true;
        }
    }
    return false;
}

std::vector<int> filter_integers(std::vector<std::any> values) {
    std::vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            if (issame(value, int(0))) {
                result.push_back(std::any_cast<int>(value));
            }
        }
        else if (value.type() == typeid(char)) {
            if (issame(value, 'c')) {
                result.push_back(std::any_cast<char>(value));
            }
        }
    }
    return result;
}