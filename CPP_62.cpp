#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return std::derivative(a) == std::derivative(b);
}

std::vector<float> derivative(const std::vector<float>& xs){
    std::vector<float> result;
    for(size_t i = 1; i < xs.size(); i++){
        result.push_back(xs[i] - xs[i-1]);
    }
    return result;
}