#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return derivative(a) == derivative(b);
}