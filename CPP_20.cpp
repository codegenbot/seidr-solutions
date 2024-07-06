```cpp
#include <iostream>
#include <vector>
#include <cmath>

bool isSame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        float diff = a[i] - b[i];
        if(abs(diff) > 1e-5f) return false;
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> vec1, vec2;

    for(int i = 0; i < n; ++i) {
        float x;
        std::cin >> x;
        vec1.push_back(x);
    }

    for(int i = 0; i < n; ++i) {
        float y;
        std::cin >> y;
        vec2.push_back(y);
    }

    if(isSame(vec1, vec2)) {
        std::cout << "The vectors are the same." << std::endl;
    } else {
        std::cout << "The vectors are different." << std::endl;
    }

    return 0;
}