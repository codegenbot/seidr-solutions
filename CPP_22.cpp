#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

template <typename T>
bool issame(std::vector<T> a, std::vector<T> b){
    return a == b;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto val : values){
        if(typeid(int) == val.type())
            result.push_back(boost::any_cast<int>(val));
    }
    return result;
}

int main() {
    // Main function code here
    return 0;
}