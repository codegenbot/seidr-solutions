#include <vector>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> createPositiveVector(int n) {
    std::vector<float> vec;
    float num;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        if (num > 0) {
            vec.push_back(num);
        }
    }
    return vec;
}

int main() {
    std::vector<float> vec1, vec2;
    int n;
    
    std::cin >> n;
    vec1 = createPositiveVector(n);
    
    std::cin >> n;
    vec2 = createPositiveVector(n);

    // Check if vectors are the same
    std::cout << std::boolalpha << issame(vec1, vec2) << std::endl;

    return 0;
}