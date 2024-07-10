#include <vector>
#include <boost/any.hpp>
#include <list>
#include <cassert>

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for(const auto &val : values){
        if(auto int_ptr = boost::any_cast<int>(&val)){
            result.push_back(*int_ptr);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}