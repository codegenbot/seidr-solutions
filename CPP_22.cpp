#include <boost/any_cast.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (boost::any_cast<bool>(value)) { // Check if value is an integer
            int num = boost::any_cast<int>(value);
            result.push_back(num);
        }
    }
    return result;
}