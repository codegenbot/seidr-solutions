#include <vector>

bool issame(const std::vector<float>& xs, const std::vector<float>& ys){
    if(xs.size() != ys.size()){
        return false;
    }
    for(int i = 0; i < xs.size(); i++){
        if(xs[i] != ys[i]){
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