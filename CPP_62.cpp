#include <vector>
#include <cassert>

using float_t = float;

std::vector<float_t> derivative(const std::vector<float_t>& v){
    if (v.size() < 2) {
        return {};
    }
    
    std::vector<float_t> result;
    for (size_t i = 1; i < v.size(); ++i) {
        result.push_back(v[i] - v[i - 1]);
    }
    
    return result;
}

bool issame(const std::vector<float_t>& a, const std::vector<float_t>& b){
    return derivative(a) == derivative(b);
}

int main(){
    assert(issame({1}, {}));
    
    return 0;
}