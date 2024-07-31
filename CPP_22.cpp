#include <vector>
#include <list>
#include <any>
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

std::vector<int> filter_integers(std::list<std::any> values){
    std::vector<int> result;
    for(auto val : values){
        if(val.type() == typeid(int))
            result.push_back(std::any_cast<int>(val));
    }
    return result;
}

int main(){
    // main function implementation
    return 0;
}