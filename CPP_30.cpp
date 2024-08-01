#include <vector>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    std::vector<float> vec1, vec2;
    
    // Read input vectors
    int n;
    std::cin >> n;
    float num;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        vec1.push_back(num);
    }
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        vec2.push_back(num);
    }

    // Check if vectors are the same
    std::cout << std::boolalpha << issame(vec1, vec2) << std::endl;

    return 0;
}