#include <vector>
#include <boost/any.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int i = boost::any_cast<int>(value);
            if (i.good()) {
                result.push_back(i);
            }
        } else if (value.type() == typeid(double)) {
            double d = boost::any_cast<double>(value);
            if (!d.isNaN()) {
                result.push_back(static_cast<int>(d));
            }
        }
    }
    return result;
}