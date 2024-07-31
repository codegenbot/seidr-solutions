#include <iostream>
#include <vector>
#include <list>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b){}

std::vector<int> filter_integers(std::list<std::any> values){
    std::vector<int> result;
    for(auto val : values){
        if(typeid(int) == val.type())
            result.push_back(std::any_cast<int>(val));
    }
    return result;
}

int main() {
    // Rest of the main function
    return 0;
}