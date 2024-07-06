#include <boost/any.hpp>
#include <vector>
#include <list>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).which() == boost::any::type::void_) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}