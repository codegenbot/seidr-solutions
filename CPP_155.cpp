#include <vector>
#include <cmath>
#include <cassert>

std::vector<int> even_odd_count(int num) {
    int evenCount = 0;
    int oddCount = 0;
    int digit;

    while (num != 0) {
        digit = std::abs(num % 10);
        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        num /= 10;
    }

    std::vector<int> result = {evenCount, oddCount};
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));

    return 0;
}