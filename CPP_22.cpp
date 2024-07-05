#include <vector>
#include <list>
#include <optional>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(std::any_cast<std::optional<int>>(value).has_value()){
            result.push_back(*std::any_cast<std::optional<int>>(value));
        }
    }
    return result;
}