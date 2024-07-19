#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

// Declaration of the derivative function - if needed
std::vector<float> derivative(const std::vector<float>& vec){
    std::vector<float> result;
    for (size_t i = 1; i < vec.size(); ++i){
        result.push_back(vec[i] - vec[i-1]);
    }
    return result;
}

int main() {
    assert(issame(std::vector<float>({1}), std::vector<float>()));
    return 0;
}