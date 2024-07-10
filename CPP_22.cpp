#include <vector>
#include <boost/any.hpp>

vector<int> filter_integers(std::list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        }
    }
    return result;
}