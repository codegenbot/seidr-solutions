#include <vector>
#include <cassert>

template<typename T>
bool issame(std::vector<T> a, std::vector<T> b) {
    // implementation
}

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result;
    for(int i = 1; i < xs.size(); ++i){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    assert (issame<float>(derivative({1}), {}));
}