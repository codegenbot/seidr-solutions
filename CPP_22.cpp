#include <boost/any.hpp>
#include <boost/type_traits.hpp>

vector<int> filter_integers(boost::any_list values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) {
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        }
    }
    return result;
}