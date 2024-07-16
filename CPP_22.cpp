#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for(const auto &val : values){
        if(auto int_val = boost::any_cast<int>(&val)){
            result.push_back(*int_val);
        }
    }
    return result;
}

int main() {
    assert (issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}),{3, 3, 3}));
    return 0;
}