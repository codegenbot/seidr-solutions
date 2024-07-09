#include <boost/any.hpp>

bool boost::typeindex::is_same(const boost::any& a, const boost::any& b) {
    return a.type() == b.type();
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}