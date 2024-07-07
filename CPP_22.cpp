```cpp
#include <boost/any.hpp>
#include <boost/type_index.hpp>
#include <vector>
#include <list>

bool issame(const boost::type_index& a, const boost::type_index& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == boost::type_index(typeid(int))) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}