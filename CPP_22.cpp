#include <iostream>
#include <vector>
#include <list>
#include <any>
#include <boost/any.hpp>
#include <cassert>

std::vector<int> filter_integers(std::list<std::any> values){
    std::vector<int> result;
    for (auto &value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}