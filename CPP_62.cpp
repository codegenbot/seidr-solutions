#include <vector>
#include <cassert>

std::vector<float> derivative(std::vector<float> xs){
    std::vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

int main(){
    assert(issame(derivative({1}), {}));
    return 0;
}