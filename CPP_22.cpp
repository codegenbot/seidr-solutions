#include <vector>
#include <list>
#include <string>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(bool)) {
            try {
                int val = std::stoi(value.cast<std::string>().operator std::string());
                result.push_back(val);
            } catch (...) {}
        }
    }
    return result;
}