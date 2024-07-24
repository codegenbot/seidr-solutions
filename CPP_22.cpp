#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type()) {
            int casted_value = boost::any_cast<int>(value);
            bool is_in_result = false;
            for (int val : result) {
                if (val == casted_value) {
                    is_in_result = true;
                    break;
                }
            }
            if (!is_in_result) {
                result.push_back(casted_value);
            }
        }
    }
    return result;
}