#include <vector>
#include <any>
#include <typeinfo>
#include <cassert>

std::vector<std::any> filter_integers(std::vector<std::any> values) {
    std::vector<std::any> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}