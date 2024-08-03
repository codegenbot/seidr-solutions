#include <vector>

bool issame(std::vector<float> a, std::vector<float> b){
    return std::vector<float>(a.begin(), a.end()) == std::vector<float>(b.begin(), b.end());
}

std::vector<float> derivative(std::vector<float> xs){
    std::vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}