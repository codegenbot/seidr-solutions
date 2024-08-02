#include <boost/any.hpp>
#include <boost/type_traits.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (boost::is_same<boost::any_cast<int>(value), int>::type()) { 
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}