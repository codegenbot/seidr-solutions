#include <vector>
#include <cmath>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-6) {
            return false;
        }
    }
    return true;
}

bool get_positive(std::vector<float> l, std::vector<float>& result) {
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return true;
}
int main() {
    std::vector<float> vec1, vec2;
    int n; std::cin >> n;
    for(int i = 0; i < n; i++) {
        float num; std::cin >> num;
        vec1.push_back(num);
    }
    int m; std::cin >> m;
    for(int j = 0; j < m; j++) {
        float num; std::cin >> num;
        vec2.push_back(num);
    }
    if (issame(vec1, vec2)) {
        std::vector<float> result;
        get_positive(vec1, result);
        for(float f : result) std::cout << f << " ";
        std::cout << '\n';
    } else {
        std::cout << "Vectors are not the same" << '\n';
    }
    return 0;
}