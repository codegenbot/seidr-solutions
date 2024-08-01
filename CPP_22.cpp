#include <vector>
#include <boost/any.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<boost::any>(value).type() == boost::typeid(int)) {
            try {
                int num = boost::any_cast<int>(value);
                if (num.good()) {
                    result.push_back(num);
                }
            } catch (...) {
                // handle the exception
            }
        }
    }
    return result;
}