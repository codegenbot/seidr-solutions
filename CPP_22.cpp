#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

bool issame(const std::type_info& type, const std::type_info& target_type){
    return type == target_type;
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