```cpp
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/container/list.hpp>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::get<int>(value) != 0) { 
            result.push_back(boost::get<int>(value));
        }
    }
    return result;
}