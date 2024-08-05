#include <vector>
#include <cassert>

std::vector<float> derivative(const std::vector<float>& v){
    std::vector<float> result(v.size() - 1);

    for (size_t i = 1; i < v.size(); ++i) {
        result[i - 1] = v[i] - v[i - 1];
    }

    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

int main(){
    assert(issame(derivative({1}), std::vector<float>{}));
    return 0;
}