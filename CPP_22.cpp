#include <vector>
#include <list>
#include <stdexcept>

std::vector<int> filter_integers(std::list<any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (any_cast<bool>(value)) {
            try {
                int val = any_cast<int>(value);
                result.push_back(val);
            } catch (std::bad_any_cast&) {
                throw; // rethrow the exception
            }
        }
    }
    return result;
}