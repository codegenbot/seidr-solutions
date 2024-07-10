#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto& value : values) {
        boost::any any_value = value;
        if (any_value.type() == typeid(int)) {
            int val = boost::any_cast<int>(any_value);
            result.push_back(val);
        }
    }
    return result;