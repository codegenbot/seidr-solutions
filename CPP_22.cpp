#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/optional.hpp>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<boost::optional<int>>(value).has_value()){
            result.push_back(*boost::any_cast<boost::optional<int>>(value));
        }
    }
    return result;
}