#include <vector>
#include <list>
#include <any>
#include <typeinfo>
#include <cassert>

template <typename T>
bool issame(std::vector<T> a, std::vector<T> b){
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values){
    std::vector<int> result;
    for(const auto& val : values){
        if(val.type() == typeid(int))
            result.push_back(std::any_cast<int>(val));
    }
    return result;
}

int main() {
    // Main function code here
    return 0;
}