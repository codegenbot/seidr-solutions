#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

std::vector<float> derivative(const std::vector<float>& a) {
    // Add your derivative logic here
}

int main(){
    assert(issame(std::vector<float>({1.0f}), std::vector<float>{}));
    return 0;
}