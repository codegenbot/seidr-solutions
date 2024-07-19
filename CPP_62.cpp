#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

std::vector<float> derivative(const std::vector<float>& coeffs){
    std::vector<float> result;
    // Calculate derivative here
    return result;
}

int main() {
    assert(issame(std::vector<float>({1}), std::vector<float>()));
    return 0;
}