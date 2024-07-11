#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

std::vector<float> derivative(const std::vector<float>& vec){
    // Implement derivative logic here
    return {}; // Return empty vector for now
}

int main(){
    assert(issame(derivative(std::vector<float>({1})), std::vector<float>{}));
    return 0;
}