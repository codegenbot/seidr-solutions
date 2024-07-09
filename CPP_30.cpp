#include <vector>
#include <algorithm>

bool areEqual(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> result = std::vector<float>();
    for (float x : v) {
        if (x >= 0.0f) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> v1, v2;
    for (int i = 0; i < n; i++) {
        float x;
        std::cin >> x;
        if (i % 2 == 0) {
            v1.push_back(x);
        } else {
            v2.push_back(x);
        }
    }
    
    if (!areEqual(get_positive(v1), get_positive(v2))) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "YES" << std::endl;
    }
    
    return 0;
}