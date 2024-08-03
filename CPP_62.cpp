#include <vector>

std::vector<float> completeCode(std::vector<float> xs){
    std::vector<float> result;
    for(int i=0; i<xs.size(); i++){
        result.push_back(xs[i] * (i+1));
    }
    return result;
}