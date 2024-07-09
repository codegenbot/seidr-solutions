#include <boost/any.hpp>

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (auto& value : values) {
        try {
            int num = boost::any_cast<int>(value);
            result.push_back(num);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;