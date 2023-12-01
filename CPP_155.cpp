#include <vector>
#include <cassert>

std::vector<int> even_odd_count(int n) {
    int evenCount = 0;
    int oddCount = 0;

    std::string numStr = std::to_string(std::abs(n));

    for (char c : numStr) {
        int digit = c - '0';
        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    std::vector<int> result = {evenCount, oddCount};
    return result;
}

int main() {
    assert(std::issame(even_odd_count(0), {1, 0}));
    assert(std::issame(even_odd_count(123456789), {4, 5}));
    assert(std::issame(even_odd_count(-987654321), {4, 5}));

    return 0;
}