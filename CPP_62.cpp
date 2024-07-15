#include <vector>
#include <cassert>

std::vector<float> derivative(const std::vector<float>& v){
    std::vector<float> result;
    for(size_t i = 1; i < v.size(); ++i){
        result.push_back(v[i] - v[i-1]);
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return derivative(a) == derivative(b);
}

int main(){
    assert (issame({1}, {}));
    
    return 0;
}