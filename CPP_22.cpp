#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

std::vector<int> filter_integers(const std::list<boost::any>& values){
    std::vector<int> result;
    for(auto value : values){
        if(value.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()){
       return false;
    }
    for(std::size_t i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}