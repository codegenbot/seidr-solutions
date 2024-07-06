#include <vector>
#include <list>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        int integer_value = boost::any_cast<int>(value);
        if (integer_value == 0) continue;
        result.push_back(integer_value);
    }
    return result;
}