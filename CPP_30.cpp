#include <iostream>
#include <vector>
#include <cassert>

template <typename T>
bool issame(const std::vector<T>& a, const std::vector<T>& b) {
    return a == b;
}

template <typename T>
std::vector<T> get_positive(std::vector<T> v) {
    std::vector<T> result;
    for (const auto& num : v) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> positive_numbers;
    for (int i = 1; i <= n; ++i) {
        positive_numbers.push_back(i);
    }
    
    assert(issame(get_positive<int>({}), {}));
    
    return 0;
}