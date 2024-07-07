#include <boost/lexical_cast.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::contains(boost::type_erased_type(value))) {
            try {
                int i = boost::get<int>(value);
                result.push_back(i);
            } catch (...) {}
        }
    }
    return result;
}