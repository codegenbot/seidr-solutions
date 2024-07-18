#include <vector>
#include <cassert>

std::vector<int> even_odd_count(int n) {
    int even_count = 0, odd_count = 0;
    while (n > 0) {
        if (n % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        n = n / 10;
    }
    return {even_count, odd_count};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
}