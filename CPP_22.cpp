```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>

std::vector<int> filter_integers(std::list<boost::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            try {
                int integer = boost::any_cast<int>(value);
                result.push_back(integer);
            } catch (boost::bad_any_cast&) {
                // ignore non-integer values
            }
        }
    }
    return result;
}