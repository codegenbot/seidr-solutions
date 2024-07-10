#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
```