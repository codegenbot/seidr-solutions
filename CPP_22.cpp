#include <vector>
#include <boost/any.hpp>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for(auto value : values){
        if(typeid(value) == typeid(int)){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    // implementation of issame function here
}

int main(){
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}