#include <vector>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::list<boost::any>& values) {
    std::vector<int> result;
    for (auto& value : values) {
        if (value.type() == boost::any::type::type_index()) {
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        }
    }
    return result;
}