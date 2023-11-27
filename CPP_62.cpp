#include <vector>

std::vector<float> derivative(std::vector<float> xs){
    std::vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    assert(issame(derivative({1}), {}));
    assert(issame(derivative({1, 2, 3}), {2, 6}));
    assert(issame(derivative({3, 2, 1}), {2, -2}));
    assert(issame(derivative({1, -2, 3, -4, 5}), {-2, 6, -12, 20}));
    return 0;
}