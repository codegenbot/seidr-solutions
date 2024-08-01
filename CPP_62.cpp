#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

std::vector<float> derivative(const std::vector<float>& a){
    std::vector<float> result(a.size() - 1);
    for (size_t i = 1; i < a.size(); ++i){
        result[i - 1] = a[i] - a[i - 1];
    }
    return result;
}

int main() {
    assert(issame(std::vector<float>({1}), std::vector<float>{}));
    
    return 0;
}