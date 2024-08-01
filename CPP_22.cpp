```cpp
#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<boost::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value).good() && issame({}, boost::any_cast<std::vector<int>>(value))) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main(){
    std::list<boost::any> values = {1, 2, 3, 4.0f, 5};
    std::cout << "Filtered integers: ";
    for (const auto& value : filter_integers(values)) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    return 0;
}