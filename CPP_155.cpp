#include <vector>
#include <string>
#include <cassert>

std::vector<int> even_odd_count(int n) {
    int evenCount = 0, oddCount = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    return {evenCount, oddCount};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    
    return 0;
}