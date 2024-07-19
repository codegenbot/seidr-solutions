#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::list<boost::any> values);

int main() {
    // main function content
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

bool issame(std::vector<int> a, std::vector<int> b){
    // issame function implementation
}