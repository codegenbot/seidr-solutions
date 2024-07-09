#include <iostream>
#include <vector>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> result;
    for (float x : v) {
        if (x > 0) result.push_back(x);
    }
    return result;
}

bool is_same(std::vector<float> vec1, std::vector<float> vec2) {
    return vec1 == vec2;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<float>> input(n);

    for (auto &vec : input) {
        int m;
        std::cin >> m;
        for (int i = 0; i < m; i++) {
            float x;
            std::cin >> x;
            vec.push_back(x);
        }
    }

    bool result = true;

    for (const auto &vec : input) {
        if (!is_same(get_positive(vec), get_positive({}))) {
            result = false;
            break;
        }
    }

    return 0;
}