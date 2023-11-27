#include <vector>
#include <cassert>
#include <boost/any.hpp>
#include <boost/algorithm/cxx11/any_of.hpp>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    // implementation of issame function
}

std::vector<int> filter_integers(const std::vector<boost::any>& values){
    std::vector<int> result;
    for(const auto& value : values){
        if(auto* ptr = boost::any_cast<int>(&value)){
            result.push_back(*ptr);
        }
    }
    return result;
}

int main(){
    std::vector<int> filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    assert(issame(filtered, {3, 3, 3}));

    // other code

    return 0;
}