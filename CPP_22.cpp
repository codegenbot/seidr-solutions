#include <vector>
#include <list>
#include <any>
#include <optional>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(const std::optional<int>& optionalInt = std::any_cast<std::optional<int>>(value)) {
            if(optionalInt.has_value()) {
                result.push_back(*optionalInt);
            }
        }
    }
    return result;
}