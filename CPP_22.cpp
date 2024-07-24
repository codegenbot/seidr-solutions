#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/type_traits.hpp>
using namespace boost;
typedef boost::variant<int, std::string> list_any;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.which() == 0) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}