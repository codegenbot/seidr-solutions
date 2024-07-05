```cpp
#include <vector>
#include <list>
#include <optional>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (auto opt = std::any_cast<std::optional<int>>(value); opt.has_value()) {
            result.push_back(opt.value());
        }
    }
    return result;
}