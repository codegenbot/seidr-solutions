#include <iostream>
#include <list>
#include <vector>
#include <any>

bool issame(vector<int> a, vector<int> b){}

vector<int> filter_integers(std::list<std::any> values){
    std::vector<int> result;
    for(auto val : values){
        if(typeid(int) == val.type())
            result.push_back(std::any_cast<int>(val));
    }
    return result;
}