```cpp
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/type_index.hpp>

bool boost::typeindex::is_same(const std::type_info& t1, const std::type_info& t2) {
    return &t1 == &t2;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}