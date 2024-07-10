#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for(auto &val : values){
        if(typeid(int) == val.type())
            result.push_back(boost::any_cast<int>(val));
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(filter_integers({boost::any(3), boost::any('c'), boost::any(3), boost::any(3), boost::any('a'), boost::any('b')}), {3, 3, 3}));

    return 0;
}