#include <boost/any.hpp>
#include <vector>
#include <list>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(bool)) {
            int i = boost::any_cast<int>(value).get_i();
            result.push_back(i);
        }
    }
    return result;
}