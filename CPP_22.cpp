#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/type_index.hpp>

bool issame(const boost::any& a, const boost::any& b) {
    return boost::typeindex::type_id<boost::any>() == boost::typeindex::type_id<decltype(a)==b)>;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}