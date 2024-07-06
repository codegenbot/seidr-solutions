#include <boost/any.hpp>
#include <vector>
#include <list>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() != typeid(int)) continue;
        int number = boost::any_cast<int>(value);
        if (number == 0) continue;
        result.push_back(number);
    }
    return result;
}