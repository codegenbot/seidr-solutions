#include <boost/any.hpp>

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int num = boost::any_cast<int>(value);
            result.push_back(num);
        }
    }
    return result;
}