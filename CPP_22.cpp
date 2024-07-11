#include <boost/variant.hpp>

using boost::any_cast;

std::vector<int> filter_integers(std::list<boost::any>& values) {
    std::vector<int> result;
    
    for (const auto& value : values) {
        if (any_cast<bool>(any_cast<std::any>(value).type() == typeid(int))) {
            try {
                int num = any_cast<int>(value);
                result.push_back(num);
            } catch (std::bad_any_cast&) {
                // Ignore non-integers
            }
        }
    }

    return result;
}