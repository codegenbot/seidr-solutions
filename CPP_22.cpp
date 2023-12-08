```
#include <iostream>
#include <vector>
#include <string>
#include <boost/any.hpp>
#include <list>
using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}
```