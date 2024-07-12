#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(const boost::any& a, const boost::any& b) {
    return boost::any_cast<int>(a) == boost::any_cast<int>(b);
}

std::vector<int> filter_integers(std::vector<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<int>(value)) {
            result.push_back(boost::get<int>(value));
        }
    }
    return result;
}