```cpp
#include <iostream>
#include <vector>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> result;
    for (float x : v) {
        if (x > 0) result.push_back(x);
    }
    return result;
}

bool issame(std::vector<float> vec1, std::vector<float> vec2) {
    return vec1 == vec2;
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::vector<float> vec;
        int m;
        std::cin >> m;
        for (int j = 0; j < m; j++) {
            float x;
            std::cin >> x;
            vec.push_back(x);
        }
        input_.push_back(vec);
    }

    bool same = true;

    for (const auto &vec : input_) {
        if (!issame(get_positive(vec), {})) {
            same = false;
            break;
        }
    }

    return 0;
}