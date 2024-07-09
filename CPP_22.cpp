#include <boost/any.hpp>
#include <vector>
#include <list>
#include <typeinfo>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int any_value = boost::any_cast<int>(value);
            result.push_back(any_value);
        }
    }
    return result;
}