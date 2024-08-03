#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

int main() {
    std::vector<float> derivative({1});
    assert(issame(derivative, {}));
}