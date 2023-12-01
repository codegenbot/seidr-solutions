#include <vector>
#include <boost/any.hpp>
#include <list>
#include <cassert>

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for(auto& value : values){
        if(auto* integer = boost::any_cast<int>(&value)){
            result.push_back(*integer);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    // Test case
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));

    return 0;
}