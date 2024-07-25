#include <vector>
#include <boost/any.hpp>

typedef std::list<boost::any> list_any;

std::vector<int> filter_integers(list_any values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}