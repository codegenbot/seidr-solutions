#include <any>
#include <vector>

bool issame(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return std::any_cast<int>(a) == std::any_cast<int>(b);
    }
    else if (a.type() == typeid(char) && b.type() == typeid(char)) {
        return std::any_cast<char>(a) == std::any_cast<char>(b);
    }
    return false;
}

std::vector<int> filter_integers(std::vector<std::any> values) {
    std::vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            if (issame(value, 0)) {
                result.push_back(std::any_cast<int>(value));
            }
        }
        else if (value.type() == typeid(char)) {
            // Add code to handle characters here
        }
    }
    return result;
}