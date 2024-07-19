#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> even_odd_count(int n) {
    int even = 0, odd = 0;
    while(n != 0) {
        if(n % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        n /= 10;
    }
    return {even, odd};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> result = even_odd_count(12345);
    for (int i : result) {
        std::cout << i << " ";
    }
    
    assert(issame(result, {2, 3})); // Testing the result

    return 0;
}