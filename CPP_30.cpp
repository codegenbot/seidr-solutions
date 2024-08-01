#include <vector>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    std::vector<float> vec1, vec2;
    float num;
    int n;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        vec1.push_back(num);
    }

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        vec2.push_back(num);
    }

    std::cout << std::boolalpha << issame(vec1, vec2) << std::endl;

    return 0;
}