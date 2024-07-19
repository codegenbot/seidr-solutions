#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> even_odd_count(int n) {
    std::vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
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