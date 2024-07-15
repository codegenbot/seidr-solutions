#include <vector>
#include <cassert>
#include <cmath>

bool issame(std::vector<float> a, std::vector<float> b){
    if(a.size() != b.size()) return false;
    
    for(size_t i = 0; i < a.size(); i++){
        if(std::abs(a[i] - b[i]) > 1e-6) return false;
    }
    
    return true;
}

std::vector<float> derivative(std::vector<float> xs){
    std::vector<float> result;
    for(size_t i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

assert(issame(derivative({1.0f}), std::vector<float>{}));