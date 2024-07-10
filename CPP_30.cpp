#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> get_positive(int n) {
    std::vector<float> positive;
    
    for (int i = 1; i <= n; ++i) {
        positive.push_back(i);
    }
    
    return positive;
}

int main() {
    int n;
    std::cin >> n;
    
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    
    std::cout << sum << std::endl;

    assert(issame(get_positive(n), get_positive(n)));
    
    return 0;
}