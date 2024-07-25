#include <boost/any.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any any = value;
        int val = any.cast<int>();
        if (!val.empty()) {
            result.push_back(val);
        }
    }
    return result;
}