#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <boost/any.hpp>
#include <boost/type_traits.hpp>

using namespace std;

vector<int> filter_integers(std::list<boost::any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == boost::typeindex::type_id<int>()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}