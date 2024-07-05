#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/optional.hpp>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<boost::optional<int>>(value)) {
            const auto optInt = boost::get<boost::optional<int>>(value);
            if (*optInt) {
                result.push_back(*optInt);
            }
        }
    }
    return result;
}