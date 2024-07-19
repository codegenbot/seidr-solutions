#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

float max_element(const std::vector<float>& l) {
    float max = l[0];
    for (size_t i = 1; i < l.size(); i++) {
        if (l[i] > max) {
            max = l[i];
        }
    }
    return max;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> values(n);
    for(int i = 0; i < n; i++) {
        std::cin >> values[i];
    }
    
    std::cout << max_element(values) << std::endl;
    
    return 0;
}