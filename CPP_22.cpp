#include <vector>
#include <list>

std::vector<int> filter_integers(std::list<any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(is_any_of_type<int>(value)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

inline bool is_any_of_type(T expectedType) {
    return any_cast<T>(value);
}