#include <boost/any_cast.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) {
            try {
                int val = boost::any_cast<int>(value);
                result.push_back(val);
            } catch (const boost::bad_any_cast&) {}
        }
    }
    return result;
}