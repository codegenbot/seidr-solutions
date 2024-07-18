#include <vector>
#include <cassert>

std::vector<int> even_odd_count(int n) {
    int evenCount = 0, oddCount = 0;
    while (n != 0) {
        if (n % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        n = n / 10;
    }
    return {evenCount, oddCount};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
}