#include <boost/any.hpp>

bool is_same(const boost::any& value1, const boost::any& value2) {
    return value1.type() == value2.type();
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int v = boost::any_cast<int>(value);
            bool good = true; // assume int is always good
            for (const auto& other : values) {
                if (is_same(value, other)) {
                    good = false;
                    break;
                }
            }
            if (good) {
                result.push_back(v);
            }
        }
    }
    return result;
}