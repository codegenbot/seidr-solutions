#include <vector>
#include <string>
#include <cassert>

std::vector<int> even_odd_count(int n) {
    int even = 0, odd = 0;
    while (n != 0) {
        if (n % 2 == 0) even++;
        else odd++;
        n /= 10;
    }
    return {even, odd};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    
    return 0;
}