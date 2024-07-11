#include <cassert>
#include <vector>

std::vector<int> factorize(int num) {
    std::vector<int> factors;
    int i = 2;
    while (num > 1) {
        if (num % i == 0) {
            factors.push_back(i);
            num /= i;
        } else {
            i++;
        }
    }
    return factors;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}