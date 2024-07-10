#include <vector>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

std::vector<float> derivative(std::vector<float> xs){
    std::vector<float> result;
    for(size_t i = 1; i < xs.size(); i++){
        result.push_back(xs[i] - xs[i-1]);
    }
    return result;
}