#include <vector>
#include <cassert>

using float_t = float;

std::vector<float_t> derivative(const std::vector<float_t>& v){
    std::vector<float_t> result;
    for(size_t i = 1; i < v.size(); ++i){
        result.push_back(v[i] - v[i-1]);
    }
    return result;
}

bool issame(std::vector<float_t> a, std::vector<float_t> b){
    return derivative(a) == derivative(b);
}