#include <vector>
#include <list>
#include <string>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(bool)) {
            bool val = std::any_cast<bool>(value);
            if (!val) continue;
        }
        try {
            int val = std::stoi(std::any_cast<std::string>(value));
            result.push_back(val);
        } catch (...) {}
    }
    return result;
}