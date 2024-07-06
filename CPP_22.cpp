#include <optional>
#include <vector>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(value.type() == typeid(std::optional<int>)) {
            auto optionalInt = boost::any_cast<std::optional<int>>(value);
            if(optionalInt.has_value()) {
                result.push_back(optionalInt.get());
            }
        }
    }
    return result;
}