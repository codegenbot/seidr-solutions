#include <boost/any.hpp>
#include <typeindex>

bool issame(const boost::any& a, const boost::any& b) {
    if (!a.type() == b.type()) return false;
    return std::type_index(typeid(*boost::any_cast<boost::any>(&a))) ==
           std::type_index(typeid(*boost::any_cast<boost::any>(&b)));
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (issame(value, boost::any(int(0)))) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}