#include <vector>

bool issame(const std::vector<float>& xs1, const std::vector<float>& xs2){
    if(xs1.size() != xs2.size()){
        return false;
    }
    for(int i = 0; i < xs1.size(); i++){
        if(xs1[i] != xs2[i]){
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