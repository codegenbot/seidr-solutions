#include <boost/any.hpp>

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (is_any_integer(value)) {
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        }
    }
    return result;
}

bool is_any_integer(const boost::any& value) {
    try {
        boost::any_cast<int>(value);
        return true;
    } catch (boost::bad_any_cast&) {
        return false;
    }
}