#include <vector>
#include <any>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int num = std::any_cast<int>(value);
            result.push_back(num);
        }
    }
    return result;
}