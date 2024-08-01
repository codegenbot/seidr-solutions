#include <vector>
#include <iostream>

bool std::issame(std::vector<float> a, std::vector<float> b){
    if(a.size() != b.size()) return false;
    for(float x : a) {
        if(!std::count(b.begin(), b.end(), x)) return false;
    }
    return true;
}