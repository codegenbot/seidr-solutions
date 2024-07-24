#include <vector>
#include <boost/any.hpp>

std::vector<int> filter_integers(std::vector<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}