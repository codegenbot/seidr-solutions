```cpp
#include <boost/type_traits.hpp>
#include <vector>
#include <list>
#include <any>

bool boost::type_traits::is_same<vector<int>, vector<int>>::type issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}