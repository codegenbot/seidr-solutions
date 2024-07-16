#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>

bool issame(vector<int> a, vector<int> b);

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for(auto& val : values){
        if(typeid(int) == val.type()){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    // Main function code here
    return 0;
}