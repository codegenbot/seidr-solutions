#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for(auto val : values){
        if (val.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    std::list<boost::any> input = {'c'};
    std::vector<int> output = filter_integers(input);
    assert(output == std::vector<int>{});
}