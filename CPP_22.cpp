#include <vector>
#include <any>
#include <cassert>
#include <typeinfo>

std::vector<std::any> filter_integers(std::vector<std::any> values) {
    std::vector<std::any> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<std::any> a, std::vector<std::any> b) {
    return a == b;
}