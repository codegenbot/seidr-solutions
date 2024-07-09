```cpp
#include <boost/any.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) {
            int val = boost::any_cast<boost::any>(value).get_value<int>();
            result.push_back(val);
        }
    }
    return result;
}