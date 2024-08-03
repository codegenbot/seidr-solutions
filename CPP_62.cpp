#include <vector>
#include <algorithm>
#include <cassert>

bool std::issame(const std::vector<float>& a, const std::vector<float>& b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> std::derivative(const std::vector<float>& xs){
    std::vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    assert(std::issame(std::derivative({1.0f}), {}));
    return 0;
}