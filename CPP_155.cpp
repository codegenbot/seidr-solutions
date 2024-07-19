#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> even_odd_count(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    return {even, odd};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> result = even_odd_count(0);
    for (int i : result) {
        std::cout << i << " ";
    }
    
    return 0;
}