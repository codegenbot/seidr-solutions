#include <vector>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::vector<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<int>(value)) {
            result.push_back(boost::get<int>(value));
        }
    }
    return result;
}

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}