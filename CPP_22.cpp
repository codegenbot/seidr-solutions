#include <vector>
#include <list>
#include <optional>

std::vector<int> filter_integers(std::list<std::optional<int>> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(value.has_value()) {
            int integer = value.get();
            result.push_back(integer);
        }
    }
    return result;