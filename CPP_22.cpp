```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>
#include <typeinfo>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for (const auto& value : values) {
        if (typeid(int) == value.type()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}