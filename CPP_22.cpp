#include <boost/any_cast.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) {
            try {
                int i = boost::any_cast<int>(value);
                result.push_back(i);
            } catch (...) {}
        }
    }
    return result;
}