#include <vector>
#include <cassert>

bool issame(std::vector<float> vec1, std::vector<float> vec2){
    return vec1 == vec2;
}

std::vector<float> derivative(std::vector<float> xs){
    std::vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}