#include <boost/lexical_cast.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) {
            try {
                int num = boost::lexical_cast<int>(value);
                result.push_back(num);
            } catch (...) {}
        }
    }
    return result;
}