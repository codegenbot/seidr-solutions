#include <cassert>
#include <vector>

std::vector<int> factorize(int num) {
    std::vector<int> factors;
    while (num % 2 == 0) {
        factors.push_back(2);
        num = num / 2;
    }
    for (int i = 3; i <= sqrt(num); i = i + 2) {
        while (num % i == 0) {
            factors.push_back(i);
            num = num / i;
        }
    }
    if (num > 2) {
        factors.push_back(num);
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