#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> even_odd_count(int n) {
    return {static_cast<int>(n % 2 == 0), static_cast<int>(n % 2 != 0)};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

assert(issame(even_odd_count(0), std::vector<int>{1, 0}));
return 0;