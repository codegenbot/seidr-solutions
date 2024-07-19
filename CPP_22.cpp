#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for(auto val : values){
        if(auto ptr = boost::any_cast<int>(&val)){
            result.push_back(*ptr);
        }
    }
    return result;
}