#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

template <typename T>
bool issame(std::vector<T> a, std::vector<T> b){
    if(a.size() != b.size())
        return false;
    
    for(size_t i=0; i<a.size(); ++i){
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for(auto val : values){
        if(typeid(int) == val.type())
            result.push_back(boost::any_cast<int>(val));
    }
    return result;
}

int main(){
    // main function implementation
    return 0;
}