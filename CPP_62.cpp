#include <initializer_list>
#include <vector>
#include <cmath>

std::vector<float> derivative(std::vector<float> a) {
    std::vector<float> result;
    if (a.size() <= 1) return result;
    for (int i = 1; i < a.size() - 1; ++i) {
        result.push_back((a[i+1] - a[i-1]) / 2.0);
    }
    return result;
}

bool isEqual(std::vector<float> A, std::vector<float> B) {
    if (A.size() != B.size()) return false;
    for (int i = 0; i < A.size(); ++i) {
        if (std::abs(A[i] - B[i]) > 1e-9) return false;
    }
    return true;
}

int main() {
    assert(isEqual(derivative({1}), {}));  
    return 0;
}