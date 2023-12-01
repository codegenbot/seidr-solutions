#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> l_prime = l;
    std::vector<int> divisible_by_three;

    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            divisible_by_three.push_back(l[i]);
        }
    }

    std::sort(divisible_by_three.begin(), divisible_by_three.end());

    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l_prime[i] = divisible_by_three[j];
            j++;
        }
    }

    return l_prime;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sort_third({ 5, 6, 3, 4, 8, 9, 2, 1 }), { 2, 6, 3, 4, 8, 9, 5, 1 }));

    return 0;
}