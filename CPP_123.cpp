#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> calculateSequence(int n) {
    std::vector<int> result;
    
    while (n != 1) {
        result.push_back(n);
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    
    result.push_back(1);
    return result;
}

std::vector<int> get_odd_collatz(int) {
    return {1};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> result = calculateSequence(n);
    
    assert(issame(result, get_odd_collatz(1)));

    return 0;
}