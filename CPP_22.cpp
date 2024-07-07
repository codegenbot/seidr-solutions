```cpp
#include <boost/any.hpp>
#include <boost/type_index.hpp>

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (const auto& value : values) {
        if (typeindex(typeid(int)) == typeindex(boost::any_cast<any>(value).type())) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}