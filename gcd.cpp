#include <numeric>
#include <iostream>
#include <vector>

std::vector<int> findIndices(int n, int a, int b, std::vector<int>& target) {
    int gcd = std::gcd(a, b);
    
    std::vector<int> indices;
    for (int i = 0; i < n; ++i) {
        if (target[i] % gcd == 0) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int n, a, b;
    
    std::cin >> n >> a >> b;
    
    std::vector<int> target(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> target[i];
    }
    
    std::vector<int> result = findIndices(n, a, b, target);
    
    for (int idx : result) {
        std::cout << idx << " ";
    }
    
    return 0;
}