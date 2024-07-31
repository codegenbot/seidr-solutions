#include <vector>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result(xs.size() - 1);
    for(int i = 0; i < xs.size() - 1; i++){
        result[i] = xs[i + 1] * (i + 1);
    }
    return result;
}