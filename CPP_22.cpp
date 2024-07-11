#include <boost/algorithm/string.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (is_arithmetic(value)) {
            int num = boost::any_cast<int>(value);
            result.push_back(num);
        }
    }
    return result;
}

bool is_arithmetic(const boost::any& value) {
    try {
        long double num = boost::any_cast<long double>(value);
        return true;
    } catch (const boost::bad_any_cast&) {
        return false;
    }
}