#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

std::vector<float> derivative(std::vector<float> xs){
    std::vector<float> result;
    for(int i = 0; i < xs.size() - 1; i++){
        result.push_back(xs[i + 1] * (i + 1));
    }
    return result;
}

int main(){
    assert(issame(derivative({1.0}), {}));
}