#include <algorithm>
#include <vector>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int) && boost::any_cast<int>(value).get() > 0) {
            result.push_back(boost::any_cast<int>(value).get());
        }
    }
    return result;
}