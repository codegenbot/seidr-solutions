#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size();
}

int main() {
    int n;
    std::cin >> n;
    if (n > 0) {
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
        if (!issame(v1, v2)) {
            std::cout << "false";
        } else {
            for (float i : v1) {
                std::cout << i << " ";
            }
            std::cout << "\n";
        }
    }
}