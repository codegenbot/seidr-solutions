```
#include <vector>
#include <list>
#include <stdexcept>

std::vector<int> filter_integers(std::list<any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (any_cast<bool>(value)) {
            try {
                int val = stoi(any_cast<std::string>(value));
                result.push_back(val);
            } catch (std::invalid_argument&) {}
        }
    }
    return result;
}