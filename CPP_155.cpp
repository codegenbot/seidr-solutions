#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> even_odd_count(int n) {
    if (n == 0) {
        return {1, 0};
    } else {
        int evens = n / 2;
        int odds = n - evens;
        return {evens, odds};
    }
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}