#include <boost/any.hpp>
#include <vector>
#include <list>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (!boost::any_cast<bool>(value)) continue; // skip non-integer values
        int num = boost::any_cast<int>(value);
        if (std::find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}