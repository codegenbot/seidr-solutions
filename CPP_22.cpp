#include <vector>
#include <list>
#include <type_traits>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::holds_alternative<int>(value)) {
            int integer = std::get<int>(value);
            result.push_back(integer);
        }
    }
    return result;
}