#include <boost/any.hpp>

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<double>(value).has_value() && boost::any_cast<double>(value).value().isNaN()) {
            try {
                int val = boost::any_cast<int>(value);
                result.push_back(val);
            } catch (...) {}
        }
    }
    return result;
}