#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for(auto value : values){
        if(value.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // code implementation for issame function
}

int main() {
    assert(issame(filter_integers({boost::any(3), boost::any('c'), boost::any(3), boost::any(3), boost::any('a'), boost::any('b')}), {3, 3, 3}));
    
    return 0;
}