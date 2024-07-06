#include <vector>
#include <list>
#include <optional>
#include <any>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int i = std::any_cast<int>(value);
            result.push_back(i);
        }
    }
    return result;
}