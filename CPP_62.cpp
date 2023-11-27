#include <vector>

bool issame(const std::vector<float>& xs){
    for(int i = 1; i < xs.size(); i++){
        if(xs[i] != xs[0]){
            return false;
        }
    }
    return true;
}

std::vector<float> derivative(const std::vector<float>& xs){
    std::vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}