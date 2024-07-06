#include <vector>
#include <list>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(const auto& optInt = std::any_cast<std::optional<int>>(value); optInt.has_value()) {
            int optionalInt = optInt.get();
            result.push_back(optionalInt);
        }
    }
    return result;