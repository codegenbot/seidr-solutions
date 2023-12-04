```
#include <iostream>
#include <vector>
#include <string>
#include <boost/any.hpp>
#include <list>
using namespace std;

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for (auto it = values.begin(); it != values.end(); ++it) {
        if (it->type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(*it));
        }
    }
    return result;
}
```