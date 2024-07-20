#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

bool issame(const std::type_info& type1, const std::type_info& type2){
    return type1 == type2;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (auto val : values){
        if (issame(val.type(), typeid(int))){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}