```cpp
#include <initializer_list>
#include <optional>
#include <vector>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(value.type() == typeid(std::optional<int>)) {
            auto optionalInt = boost::any_cast<std::optional<int>>(value);
            if( optionalInt.has_value()) {
                int i = optionalInt.get();
                result.push_back(i);
            }
        }
    }
    return result;
}