```
#include <boost/any.hpp>
#include <list>
#include <vector>
#include <typeinfo>

template<typename T1, typename T2>
bool issame(const boost::any& a, const T2& b) {
    return &typeid(T2) == &a.type();
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (issame(value, int())) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}