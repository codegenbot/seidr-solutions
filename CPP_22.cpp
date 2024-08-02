```cpp
#include <vector>
#include <list>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (auto& value : values) {
        if (boost::holds_alternative<int>(value)) {
            result.push_back(boost::get<int>(value));
        }
    }
    return result;
}