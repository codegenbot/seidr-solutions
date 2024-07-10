#include <iostream>
#include <vector>
#include <cassert>

template <typename T>
bool issame(const std::vector<T>& a, const std::vector<T>& b){
    return a == b;
}

int main() {
    int n;
    std::cin >> n;
    
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    
    assert(issame(std::vector<int>{}, std::vector<int>{}));
    
    std::cout << sum;
    
    return 0;
}