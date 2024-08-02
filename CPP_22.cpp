#include <vector>
#include <list>
#include <algorithm>
#include <any>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}